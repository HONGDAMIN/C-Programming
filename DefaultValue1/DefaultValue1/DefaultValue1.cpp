#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}


int main(void)
{
	std::cout << Adder() << std::endl; // �Ű������� ���� ���� �ʾұ⿡ ������ �� 1,2�� ����.
	std::cout << Adder(5) << std::endl; // �Ű������� �ϳ� �����Ǿ��⿡ num1�� 5�� ���� num2�� ������ �� 2�� ����.
	std::cout << Adder(3,5) << std::endl; //�Ű������� �� �� ���� �Ǿ��⿡ 3,5�� ����.

	return 0;
}