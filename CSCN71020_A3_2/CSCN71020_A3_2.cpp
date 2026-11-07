#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void get_result(char* player1, char* player2, char* result) {

	if (*player1 == *player2) {
		char output[] = "Draw";
		for (int i = 0; i < sizeof(output); i++) {
			result += i;
			*result = *(output + i);
			result -= i;
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

	};
}
