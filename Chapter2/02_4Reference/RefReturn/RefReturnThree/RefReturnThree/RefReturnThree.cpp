#include <iostream>

using namespace std;

int RefReturnTwo(int& ref)	// ��ȯ���� int�̴�.
{
	ref++;
	
	return ref; // �����ڸ� ��ȯ������, ��ȯ���� int�̱� ������ �����ڰ� �����ϴ� ������ ���� ��ȯ�ȴ�.
				// ������ ����� ���� ��ȯ�ȴ�.
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