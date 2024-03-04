#include <iostream>

using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}

	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref;
	const int& num;

public:
	BBB(AAA& r, const int& n)
		:ref(r), num(n) // 참조자도 이니셜라이즈를 활용하면 멤버변수로 선언할 수 있다.
	{

	}

	void ShowYourName()
	{
		ref.ShowYourName();

		cout << "and" << endl;
		cout << "I ref num" << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();

	return 0;
}