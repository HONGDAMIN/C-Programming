#include <iostream>

int main(void)
{
	while (true) // ���� ������ �ɱ� ���ؼ�, Ư�� ������ �����ϸ� �����Ѵ�. while,if ����.
	{
		std::cout << "��ǰ �Ǹűݾ��� �Է��ϼ���. (-1 �Է½� ����) ";
		double SaleAmount; // double�� ����ϴ� ������ �Ҽ������� ��Ÿ���� �ֱ⶧��. int�� ���� ǥ���� ����
		std::cin >> SaleAmount;

		if (SaleAmount == -1) // ���ѷ��� Ż�⹮
		{
			std::cout << "���α׷��� �����մϴ�. " << std::endl;
			break;
		}

		double BaseSalary = 50; // �⺻�޿�
		double Commision = SaleAmount * 0.12; //�μ�Ƽ��
		double TotalSalary = BaseSalary + Commision; // �� �޿�

		std::cout << "�̹��� �⺻�޿��� " << BaseSalary << "���� �Դϴ�. " << std::endl;
		std::cout << "�̹��� �μ�Ƽ��� " << Commision << "���� �Դϴ�. " << std::endl;
		std::cout << "�̹��� �޿��� " << TotalSalary << "���� �Դϴ�. " << std::endl;

	}

	return 0;
}