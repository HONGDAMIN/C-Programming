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
	std::cout << "BestComImpl이 정의한 함수" << std::endl;
	PrettyFunc(); // 동일 이름공간
	ProgComImpl::SimpleFunc(); // 다른 이름공간
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pritty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgComImpl이 정의한 함수" << std::endl;
}