#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace BestComImpl
{
	void PrettyFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();

	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestComImpl�� ������ �Լ�" << std::endl;
	PrettyFunc(); // ���� �̸�����
	ProgComImpl::SimpleFunc(); // �ٸ� �̸�����
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pritty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgComImpl�� ������ �Լ�" << std::endl;
}