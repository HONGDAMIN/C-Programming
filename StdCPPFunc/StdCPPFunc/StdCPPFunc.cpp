#define _CRT_SECURE_NO_WARNINGS


#include <cmath> // c의 표준헤더 math.h에 대응한다.
#include <cstdio> // c의 표준헤더 stdio.h에 대응한다.
#include <cstring> // c의 표준헤더 string.h에 대응한다.

using namespace std; // c의 표준에 정의된 함수들도 이름공간 std 안에 선언이 되어있어서 삽입되어야 한다.

int main(void)
{
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1); // c언어의
	printf("%s: %f \n", str1, sin(0.14)); // 표준함수을
	printf("%s: %f \n", str2, abs(-1.25)); // 호출하고 있다.

	return 0;
}