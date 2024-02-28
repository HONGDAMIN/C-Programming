#include <iostream>

using namespace std;

bool IsPositive(int num) // bool도 기본 자료형이기 때문에 함수의 반환형으로도 선언 가능하다.
{
	if (num < 0)
		return false;
	else
		return true;
}

int main(void)
{
	bool isPos;
	int num;
	
	cout << "Input number : ";
	cin >> num;

	isPos = IsPositive(num);
	
	if (isPos)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;

	return 0;
}