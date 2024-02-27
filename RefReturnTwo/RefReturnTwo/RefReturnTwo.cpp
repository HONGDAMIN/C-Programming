#include <iostream>

using namespace std;

int& RefReturnOne(int& ref) // RefReturnOne.cpp의 RefReturnOne과 동일하다.
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefReturnOne(num1); // 참조자가 아닌 일반변수를 선언해서 반환 값을 저장할 수 있다.
								   // 13행에 선언된 num1과 14행에 선언된 num2는 완전히 별개의 변수가 되었다.
	
	num1 += 1;     // 서로 다른 변수임을 확인하기 위해
	num2 += 100;   // 서로 다른 연산을 진행했다.

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;
} // 값이 서로 다르게 나온다.