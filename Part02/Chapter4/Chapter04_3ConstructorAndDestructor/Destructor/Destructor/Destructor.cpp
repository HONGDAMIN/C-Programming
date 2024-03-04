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
	Person(const char* myname, int myage) // 생성자 , 문자열 리터럴은 상수이므로 직접 'char*'로 변환할 수 없다.
										  // 그래서 const 사용
	{
		int len = strlen(myname) + 1; // 메모리 공간의 낭비, 부족을 방지 하기 위해서 문자열의 길이만큼 메모리를 동적할당 하고있다.
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Person() // 소멸자
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