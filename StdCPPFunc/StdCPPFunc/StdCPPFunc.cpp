#define _CRT_SECURE_NO_WARNINGS


#include <cmath> // c�� ǥ����� math.h�� �����Ѵ�.
#include <cstdio> // c�� ǥ����� stdio.h�� �����Ѵ�.
#include <cstring> // c�� ǥ����� string.h�� �����Ѵ�.

using namespace std; // c�� ǥ�ؿ� ���ǵ� �Լ��鵵 �̸����� std �ȿ� ������ �Ǿ��־ ���ԵǾ�� �Ѵ�.

int main(void)
{
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1); // c�����
	printf("%s: %f \n", str1, sin(0.14)); // ǥ���Լ���
	printf("%s: %f \n", str2, abs(-1.25)); // ȣ���ϰ� �ִ�.

	return 0;
}