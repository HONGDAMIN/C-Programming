#define _CRT_SECURE_NO_WARNINGS // strcpy ���� �ذ�

#include <iostream>
#include <string.h> // C++����
#include <stdlib.h> // C����� ��������� �߰��ϴ� �͵� �����ϴ�.

using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len); // ���ڿ� ������ ���� �迭�� �� ������ �Ҵ��ϰ� �ִ�.

	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");

	cout << str << endl;

	free(str); // �� ������ �Ҵ�� �޸� ������ �Ҹ��ϰ� �ִ�.

	return 0;
}