#include <iostream>

using namespace std;

int& RefReturnOne(int& ref) // RefReturnOne.cpp�� RefReturnOne�� �����ϴ�.
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefReturnOne(num1); // �����ڰ� �ƴ� �Ϲݺ����� �����ؼ� ��ȯ ���� ������ �� �ִ�.
								   // 13�࿡ ����� num1�� 14�࿡ ����� num2�� ������ ������ ������ �Ǿ���.
	
	num1 += 1;     // ���� �ٸ� �������� Ȯ���ϱ� ����
	num2 += 100;   // ���� �ٸ� ������ �����ߴ�.

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;
} // ���� ���� �ٸ��� ���´�.