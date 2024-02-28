#include <iostream>

namespace BestCompl
{
	void SimpleFunc(void); // 이름공간 BestCompl에 위치하는 SimpleFunc의 선언
}

namespace ProgComImpl
{
	void SimpleFunc(void); // 이름공간 ProgComImpl에 위치하는 SimpleFunc의 선언
}

int main(void)
{
	BestCompl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	return 0;
}

void BestCompl::SimpleFunc(void)
{
	std::cout << "BestCompl이 정의한 함수" << std::endl; // 이름공간 BestCompl에 위치하는 SimpleFunc의 정의
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgComImpl이 정의한 함수" << std::endl; // 이름공간 ProgComImpl에 위치하는 SimpleFunc의 정의
}