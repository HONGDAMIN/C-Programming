#include <iostream>

using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	SimpleClass()
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	//SimpleClass(int n1 = 0, int n2 = 0)  디폴트 값 확인용, 다른 생성자를 주석 처리하고 이것만 주석처리를 해제하면 디폴트 값이 나온다.
	//{
	//	num1 = n1;
	//	num2 = n2;
	//}

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2;
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();

	return 0;
}