#include <iostream>

int main(void)
{
	char name[100]; // name�̶�� ��ҿ� 100���ڱ��� ���� �� �ִ�.
	char lang[200]; // lang�̶�� ��ҿ� 200���ڱ��� ���� �� �ִ�.
	
	std::cout << "�̸��� �����Դϱ�?";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
	std::cin >> lang;

	std::cout << "�� �̸���  "<< name <<" �Դϴ�.\n"; // '/n'�� std::endl�� ������ ������ ����Ѵ�. std::endl ����ص� �����ϴ�.
	std::cout << "���� �����ϴ� ���� " << lang << " �Դϴ�." << std::endl;

	return 0;
}