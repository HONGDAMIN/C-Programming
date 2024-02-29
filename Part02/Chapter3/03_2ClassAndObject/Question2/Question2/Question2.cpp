#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Printer
{
private:
	char str[50];

public:
	void SetString(const char*s); // 문자열을 받아서 클래스 내의 문자열에 복사하는 함수
	void ShowString(); // 클래스 내의 문자열을 화면에 출력하는 함수
};

void Printer::SetString(const char* s)
{
	strcpy(str, s); // 전달받은 문자열을 클래스 내의 문자열에 복사
}

void Printer::ShowString()
{
	cout << str << endl;
}

int main(void)
{
	Printer pnt;
	pnt.SetString("HelloWorld!");
	pnt.ShowString();

	pnt.SetString("I love C++!");
	pnt.ShowString();

	return 0;
}