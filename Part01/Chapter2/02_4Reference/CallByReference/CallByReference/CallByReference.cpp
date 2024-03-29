#include <iostream>	

using namespace std;

void SwapByRef(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
} // Call - by - reference

int main(void)
{
	int val1 = 10;
	int val2 = 20;
	SwapByRef(&val1, &val2); // val1과 val2에 저장된 값이 바뀌기를 기대한다.

	cout << "val1 : " << val1 << endl; // 20 출력
	cout << "val2 : " << val2 << endl; // 10 출력

	return 0;
} // 잘 된다.