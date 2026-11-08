#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
// A function that checks the values of player1 and player2. It then using pointers sets result to the neccessary value.
void get_result(char* player1, char* player2, char* result) {
	// An if statment that checks if the result is a draw and updates the result value to be "Draw".
	if (*player1 == *player2) {
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
		// Seperate output statments for the player1 wins and player2 wins. 
		char output1[] = "Player1";
		char output2[] = "Player2";
		// An if statement that handles player1 = Paper, and player2 = Rock.
		if (*player1 == 'P' && *player2 == 'R') {
			for (int i = 0; i < sizeof(output1); i++) {
				result += i;
				*result = *(output1 + i);
				result -= i;
			}
		}
		// An else if statement that handles player1 = Rock, and player2 = Scissors.
		else if (*player1 == 'R' && *player2 == 'S') {
			for (int i = 0; i < sizeof(output1); i++) {
				result += i;
				*result = *(output1 + i);
				result -= i;
			}
		}
		// An else if statement that handles player1 = Scissors, and player2 = Paper.
		else if (*player1 == 'S' && *player2 == 'P') {
			for (int i = 0; i < sizeof(output1); i++) {
				result += i;
				*result = *(output1 + i);
				result -= i;
			}
		}
		// An else if statement that handles player1 = Rock, and player2 = Paper.
		else if (*player1 == 'R' && *player2 == 'P') {
			for (int i = 0; i < sizeof(output2); i++) {
				result += i;
				*result = *(output2 + i);
				result -= i;
			}
		}
		// An else if statement that handles player1 = Scissor, and player2 = Rock.
		else if (*player1 == 'S' && *player2 == 'R') {
			for (int i = 0; i < sizeof(output2); i++) {
				result += i;
				*result = *(output2 + i);
				result -= i;
			}
		}
		// An else if statement that handles player1 = Paper, and player2 = Scissor.
		else if (*player1 == 'P' && *player2 == 'S') {
			for (int i = 0; i < sizeof(output2); i++) {
				result += i;
				*result = *(output2 + i);
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
		TEST_METHOD(BothInputsScissor)
		{
			char player1[] = "Scissor";
			char player2[] = "Scissor";
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
		TEST_METHOD(OneRock_TwoScissor)
		{
			char player1[] = "Rock";
			char player2[] = "Scissor";
			char result[8];
			char expected_result[8] = "Player1";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(OneScissor_TwoPaper)
		{
			char player1[] = "Scissor";
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
		TEST_METHOD(OneScissor_TwoRock)
		{
			char player1[] = "Scissor";
			char player2[] = "Rock";
			char result[8];
			char expected_result[8] = "Player2";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		TEST_METHOD(OnePaper_TwoScissor)
		{
			char player1[] = "Paper";
			char player2[] = "Scissor";
			char result[8];
			char expected_result[8] = "Player2";
			get_result(player1, player2, result);
			Assert::AreEqual(result, expected_result);
		}
		
		

	};
}
