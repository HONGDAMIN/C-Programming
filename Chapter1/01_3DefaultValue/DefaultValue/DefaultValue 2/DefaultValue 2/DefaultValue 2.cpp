#include <iostream>

int Adder(int num1 = 1, int num2 = 2); // ����, �Ű����� ������ �� ������ ����κп� ��ġ.

int main(void)
{
	std::cout << Adder() << std::endl; // �Ű������� ������� ������ �� 1, 2 ����.
	std::cout << Adder(5) << std::endl; // �Ű����� 5�Ѱ� 5,������ �� 2 ����.
	std::cout << Adder(3,5) << std::endl; // �Ű����� 2�� , 3,5 ����

	return 0;
}

int Adder(int num1, int num2) // ����
{
	return num1 + num2;
}