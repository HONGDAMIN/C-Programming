#include <iostream>

int main(void)
{
	char Name[50];
	char Number[50];

	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> Name;

	std::cout << "��ȭ��ȣ�� �����Դϱ�? ";
	std::cin >> Number;

	std::cout << "���´� " << Name << "�̴�." << std::endl;
	std::cout << "��ȭ�� " << Number << "�̴�." << std::endl;

	return 0;
}