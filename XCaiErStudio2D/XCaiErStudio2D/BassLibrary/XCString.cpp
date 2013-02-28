#include "XCString.h"

XCString::XCString( const char* s )
{
	if (!s)
		m_str = 0;
	else
	{
		int nStrCount = 0;
		const char* p = s;
		while (p++)
		{
			nStrCount++;
		}
		m_str = new char[nStrCount+1];
		strcpy(m_str, s);
	}
}
