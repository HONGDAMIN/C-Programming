
#include <iostream>

using namespace std;

int main(void)
{
	int num = 12;
	int* ptr = &num; // ptr�� num�� �ּҰ� ����
	int** dptr = &ptr; // �����͸� �����ϴ� ������ dptr ����, dptr�� ptr�� �ּҰ� ����

	int& ref = num; // num�� ������ ref. 12�� ������ ���� ������.
	int* (&pref) = ptr; // ������ ������ ������ ����, 
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *ptr << endl;
	cout << **dpref << endl;

	return 0;
}