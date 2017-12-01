#include "ComputeCaptcha.h"
#include <cassert>
#include <iostream>

void main()
{
	assert(3 == computeCaptchaSum("1122"));
	assert(4 == computeCaptchaSum("1111"));
	assert(0 == computeCaptchaSum(""));
	assert(0 == computeCaptchaSum("1234"));
	assert(9 == computeCaptchaSum("91212129"));

	assert(6 == computeCaptchaSum("1212", 2));
	assert(0 == computeCaptchaSum("1221", 2));
	assert(4 == computeCaptchaSum("123425", 3));
	assert(12 == computeCaptchaSum("123123", 3));
	assert(4 == computeCaptchaSum("12131415", 4));

	std::cout << "Asserts Passed" << std::endl;
	std::cout << "Enter your captcha" << std::endl;
	std::string input;
	std::cin >> input;
	std::cout << computeCaptchaSum(input) << std::endl;
	std::cout << computeCaptchaSum(input, input.length() / 2) << std::endl;
	std::cout << "Done!" << std::endl;
	std::cin >> input;
}
