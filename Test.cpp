// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Test
{
public:
	Test()
		: m_value(1)
	{};

	void test() {};
	int getValue() const
	{
		return m_value;
	}

	const char* getChar() const
	{
		return m_pChar;
	}

public:
	const int m_value;
	const char *m_pChar;
	const char *pTT;
};

int _tmain(int argc, _TCHAR* argv[])
{
	const Test *pTest = new Test;
	const char *pChar = pTest->getChar();

	getchar();
	return 0;
}

