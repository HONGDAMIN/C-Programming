#include<iostream>

namespace BestCompl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}

}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgComImpl�� ������ �Լ�" << std::endl;
	}
}

int main(void)
{
	BestCompl::SimpleFunc(); // ȣ��
	ProgComImpl::SimpleFunc(); // ȣ��

	return 0;
}