#include <gtest/gtest.h>

using namespace testing;
using namespace std;

TEST(string_calculator_add_When_Passed_A_Single_Number, returns_0_for_empty_string) {
	//Arrange
	StringCalculator objUnderTest;
	string input = "";
	int expectedValue = 0;

	//Act
int actualValue=objUnderTest.Add(input);

     //Assert - Fatal
ASSERT_EQ(actualValue, expectedValue);
}
