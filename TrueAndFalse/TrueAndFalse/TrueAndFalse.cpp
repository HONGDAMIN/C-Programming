#include <iostream>

using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "true : " << true << endl;
	cout << "false : " << false << endl;

	while (true) // ���ѷ��� ����� ���� true ���, 1�� ����� �� �ִ�.
	{
		cout << i++ << ' ';
		if (i > num) // i�� 10���� Ŀ����
			break; // ����ȴ�.
	}
	cout << endl;

	cout << "sizof 1 : " << sizeof(1) << endl; //  ����� ������
	cout << "sizeof 0 : " << sizeof(0) << endl; // ũ�⸦ Ȯ���ϱ� ���� ����.
	
	cout << "sizeof true : " << sizeof(true) << endl; // true��
	cout << "sizeof false : " << sizeof(false) << endl; // false�� ũ�⸦ Ȯ���ϱ� ���� ����.

	return 0;
}