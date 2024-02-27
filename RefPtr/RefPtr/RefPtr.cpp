
#include <iostream>

using namespace std;

int main(void)
{
	int num = 12;
	int* ptr = &num; // ptr에 num의 주소값 저장
	int** dptr = &ptr; // 포인터를 저장하는 포인터 dptr 선언, dptr에 ptr의 주소값 저장

	int& ref = num; // num의 참조자 ref. 12의 데이터 값을 가진다.
	int* (&pref) = ptr; // 포인터 변수의 참조자 선언, 
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *ptr << endl;
	cout << **dpref << endl;

	return 0;
}