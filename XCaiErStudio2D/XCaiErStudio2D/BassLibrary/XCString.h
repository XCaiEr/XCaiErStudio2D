#pragma once
#include <iostream>
#include<assert.h>
using namespace std;
class XCString
{
public:
	XCString(const char* s);

private:
	inline int CharLen(const char* str)
	{
		int nLen;
		while (*str++ != '\0')
			nLen++;
		return nLen;
	}
	inline char* CharCpy(char* strD, const char* strS)
	{
		assert((strD != NULL) && (strS != NULL));
		char* strR=strD;
		while ((*strD++=*strS++)!='\0');
		return strR;
	}

	char* m_str;
};