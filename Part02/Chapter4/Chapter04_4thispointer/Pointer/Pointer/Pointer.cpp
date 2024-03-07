#include <iostream>
#include <cstring>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n)
		:num(n)
	{
		cout << "num = " << num << ", ";
		cout << "address = " << this << endl;
	}

	void ShowSipleData()
	{
		cout << num << endl;
	}

	SoSimple* GetThisPointer()
	{
		return this;
	}
};

int main(void)
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer(); // sim1狼 按眉 林家蔼 历厘
	cout << ptr1 << ", ";
	ptr1->ShowSipleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer(); // sim2狼 按眉 林家 蔼 历厘
	cout << ptr2 << ", ";
	ptr2->ShowSipleData();

	return 0;
}