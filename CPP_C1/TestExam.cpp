#include "TestExam.h"
#include <cstdlib>
#include <string>
void append(char body[], const char tail[])
{
	int len1 = std::strlen(body);
	int len2 = std::strlen(tail);
	int len3 = len1 + len2;
	char* newarr = new char[len3];
	strcpy_s(newarr, len1 + 1, body);
	strcpy_s((newarr + len1), len2 + 1, tail);
	strcpy_s(body, len1 + len2 + 1, newarr);

}
