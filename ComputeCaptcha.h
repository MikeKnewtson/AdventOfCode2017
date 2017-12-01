#pragma once
#include <string>

auto inline computeCaptchaSum(std::string captcha, unsigned step = 1)
{
	auto stopIndex = captcha.length();
	if (stopIndex == 0)
		return 0ul;
	unsigned long retVal = 0;

	for (std::string::size_type index = 0; index < stopIndex; index++)
	{
		if (captcha[(index + step) % stopIndex] == captcha[index])
			retVal += captcha[index] - '0';
	}

	return retVal;
}
