#include "stdafx.h"
#include "CheckRegex.h"


CheckRegex::CheckRegex() : reg("[0-9]{2,}")
{
}

CheckRegex::CheckRegex(string temp)
{
	reg = temp.c_str();
}

CheckRegex::CheckRegex(const CheckRegex& obj)
{
	reg = obj.reg;
}

CheckRegex::~CheckRegex()
{
}


void CheckRegex::setRegex(string temp)
{
	reg = temp;
}


bool CheckRegex::checkIsRightString(string stringToCheck)
{
	bool flag;
	flag = regex_match(stringToCheck, reg);
	if (flag)
		return true;
	else
		return false;
}
