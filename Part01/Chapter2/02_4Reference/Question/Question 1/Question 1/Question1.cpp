#include <iostream>

using namespace std;

void AddRef(int& num1)
{
	num1++;
}

void ReverseRef(int& num2)
{
	num2 *= -1;
}

int main(void)
{
	int val = 15;

	AddRef(val);
	cout << "val : " << val << endl;

	ReverseRef(val);
	cout << "val : " << val << endl;

	return 0;
}