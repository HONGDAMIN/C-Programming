#include <iostream>

using namespace std;



int main(void)
{
	const int num = 12;
	const int* aaa = &num; // ������ ����
	const int* (&bbb) = aaa; // ����� �� ���ϱ�

	cout << *aaa << endl;
	cout << *bbb << endl;
	

	return 0;
}