#define _CRT_SECURE_NO_WARNINGS // strcpy 오류 해결

#include <iostream>
#include <string.h> // C++에서
#include <stdlib.h> // C언어의 헤더파일을 추가하는 것도 가능하다.

using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len); // 문자열 저장을 위한 배열을 힙 영역에 할당하고 있다.

	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");

	cout << str << endl;

	free(str); // 힙 영역에 할당된 메모리 공간을 소멸하고 있다.

	return 0;
}