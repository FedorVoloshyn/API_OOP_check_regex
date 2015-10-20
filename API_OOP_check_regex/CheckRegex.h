#pragma once
#include "stdafx.h"
class CheckRegex
{
private:
	regex reg;
public:
	CheckRegex();
	CheckRegex(string);
	CheckRegex(const CheckRegex&);
	~CheckRegex();
	void setRegex(string temp);
	bool checkIsRightString(string stringToCheck);
};

