#include <iostream>

using namespace std;

int RefReturnTwo(int& ref)	// 반환형이 int이다.
{
	ref++;
	
	return ref; // 참조자를 반환하지만, 반환형이 int이기 때문에 참조자가 참조하는 변수의 값이 반환된다.
				// 변수에 저장된 값이 반환된다.
}

int main(void)
{
	int num1 = 1;
	int num2 = RefReturnTwo(num1);

	num1 += 1;
	num2 += 100;

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;
}