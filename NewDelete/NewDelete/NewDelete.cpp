#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

char* MakeStrAdr(int len)
{
	//char* str = (char*)malloc(sizeof(char) * len); new와 비교, new가 훨씬 간결하다.
	char* str = new char[len];

	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");

	cout << str << endl;
	//free(str); delete와 비교
	delete[] str;

	return 0;
}