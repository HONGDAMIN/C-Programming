#include <iostream>

int main(void)
{
	int Number;
	std::cout << "�������� ����� ���ڸ� �Է��ϼ���. ";
	std::cin >> Number;


	std::cout << "���� ����մϴ�. ";
	for (int i = 1; i <= 9; ++i)
	{
		std::cout << "X" << i << "=" << Number * i << std::endl;
	}

		return 0; 
}