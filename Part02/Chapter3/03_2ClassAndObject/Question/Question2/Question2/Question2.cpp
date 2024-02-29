#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Printer
{
private:
	char str[50];

public:
	void SetString(const char*s); // ���ڿ��� �޾Ƽ� Ŭ���� ���� ���ڿ��� �����ϴ� �Լ�
	void ShowString(); // Ŭ���� ���� ���ڿ��� ȭ�鿡 ����ϴ� �Լ�
};

void Printer::SetString(const char* s)
{
	strcpy(str, s); // ���޹��� ���ڿ��� Ŭ���� ���� ���ڿ��� ����
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