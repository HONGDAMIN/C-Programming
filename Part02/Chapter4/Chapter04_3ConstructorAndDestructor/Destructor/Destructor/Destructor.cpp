#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage) // ������ , ���ڿ� ���ͷ��� ����̹Ƿ� ���� 'char*'�� ��ȯ�� �� ����.
										  // �׷��� const ���
	{
		int len = strlen(myname) + 1; // �޸� ������ ����, ������ ���� �ϱ� ���ؼ� ���ڿ��� ���̸�ŭ �޸𸮸� �����Ҵ� �ϰ��ִ�.
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

	~Person() // �Ҹ���
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man("Hong Da Min", 29);
	Person women("Choi Su Jeong", 31);
	
	man.ShowPersonInfo();
	women.ShowPersonInfo();
	
}