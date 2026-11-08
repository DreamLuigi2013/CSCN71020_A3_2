#include "pch.h"
#include "CppUnitTest.h"
#include "string.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
// A function that checks the values of player1 and player2. It then using pointers sets result to the neccessary value.
void get_result(char* player1, char* player2, char* result) {
	
	// An if statment that checks if the result is a draw and updates the result value to be "Draw".
	if (strcmp(player1, player2) == 0) {
		char output[] = "Draw";
		// A for loop that cycles the pointers location, and then updates the value using pointer arithmetic on output.
		for (int i = 0; i < sizeof(output); i++) {
			result += i; // Sets result pointer to correct location.
			*result = *(output + i);
			result -= i; // Resets result pointer to original location.
		}
	}
	// An else if statment that happens when the result is a non-draw.
	else if (*player1 != *player2) {
		// Seperate output statments for the player1 wins, player2 wins and invalid entries. 
		char output1[] = "Player1";
		char output2[] = "Player2";
		char output3[] = "Invalid";
		// An if statement that handles player1 = Paper, and player2 = Rock.
		if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) {
			for (int i = 0; i < sizeof(output1); i++) {
				result += i;
				*result = *(output1 + i);
				result -= i;
			}
		}
		// An else if statement that handles player1 = Rock, and player2 = Scissors.
		else if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) {
			for (int i = 0; i < sizeof(output1); i++) {
				result += i;
				*result = *(output1 + i);
				result -= i;
			}
		}
		// An else if statement that handles player1 = Scissors, and player2 = Paper.
		else if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) {
			for (int i = 0; i < sizeof(output1); i++) {
				result += i;
				*result = *(output1 + i);
				result -= i;
			}
		}
		// An else if statement that handles player1 = Rock, and player2 = Paper.
		else if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Paper") == 0) {
			for (int i = 0; i < sizeof(output2); i++) {
				result += i;
				*result = *(output2 + i);
				result -= i;
			}
		}
		// An else if statement that handles player1 = Scissors, and player2 = Rock.
		else if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Rock") == 0) {
			for (int i = 0; i < sizeof(output2); i++) {
				result += i;
				*result = *(output2 + i);
				result -= i;
			}
		}
		// An else if statement that handles player1 = Paper, and player2 = Scissors.
		else if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Scissors") == 0) {
			for (int i = 0; i < sizeof(output2); i++) {
				result += i;
				*result = *(output2 + i);
				result -= i;
			}
		}
		// An else statment that handles invalid inputs.
		else {
			for (int i = 0; i < sizeof(output3); i++) {
				result += i;
				*result = *(output3 + i);
				result -= i;
			}
		}
	}
}

namespace CSCN71020A32
{
	TEST_CLASS(CSCN71020A32)
	{
	public:
		
		TEST_METHOD(BothInputsRock)
		{
			char player1[] = "Rock";
			char player2[] = "Rock";
			char result[5];
			char expected_result[5] = "Draw";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(BothInputsScissors)
		{
			char player1[] = "Scissors";
			char player2[] = "Scissors";
			char result[5];
			char expected_result[5] = "Draw";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(BothInputsPaper)
		{
			char player1[] = "Paper";
			char player2[] = "Paper";
			char result[5];
			char expected_result[5] = "Draw";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(OnePaper_TwoRock)
		{
			char player1[] = "Paper";
			char player2[] = "Rock";
			char result[8];
			char expected_result[8] = "Player1";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(OneRock_TwoScissors)
		{
			char player1[] = "Rock";
			char player2[] = "Scissors";
			char result[8];
			char expected_result[8] = "Player1";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(OneScissors_TwoPaper)
		{
			char player1[] = "Scissors";
			char player2[] = "Paper";
			char result[8];
			char expected_result[8] = "Player1";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(OneRock_TwoPaper)
		{
			char player1[] = "Rock";
			char player2[] = "Paper";
			char result[8];
			char expected_result[8] = "Player2";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(OneScissors_TwoRock)
		{
			char player1[] = "Scissors";
			char player2[] = "Rock";
			char result[8];
			char expected_result[8] = "Player2";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(OnePaper_TwoScissors)
		{
			char player1[] = "Paper";
			char player2[] = "Scissors";
			char result[8];
			char expected_result[8] = "Player2";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(InvalidEntryP1)
		{
			char player1[] = "P";
			char player2[] = "Scissors";
			char result[8];
			char expected_result[8] = "Invalid";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
	
		

	};
}
