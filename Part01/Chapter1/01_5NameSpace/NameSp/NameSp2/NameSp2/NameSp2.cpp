#include <iostream>

namespace BestCompl
{
	void SimpleFunc(void); // �̸����� BestCompl�� ��ġ�ϴ� SimpleFunc�� ����
}

namespace ProgComImpl
{
	void SimpleFunc(void); // �̸����� ProgComImpl�� ��ġ�ϴ� SimpleFunc�� ����
}

int main(void)
{
	BestCompl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	return 0;
}

void BestCompl::SimpleFunc(void)
{
	std::cout << "BestCompl�� ������ �Լ�" << std::endl; // �̸����� BestCompl�� ��ġ�ϴ� SimpleFunc�� ����
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgComImpl�� ������ �Լ�" << std::endl; // �̸����� ProgComImpl�� ��ġ�ϴ� SimpleFunc�� ����
}