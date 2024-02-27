#include <iostream>

using namespace std;



int main(void)
{
	const int num = 12;
	const int* aaa = &num; // 포인터 선언
	const int* (&bbb) = aaa; // 저장된 값 구하기

	cout << *aaa << endl;
	cout << *bbb << endl;
	

	return 0;
}