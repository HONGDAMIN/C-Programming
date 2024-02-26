#include<iostream>

namespace BestCompl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}

}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgComImpl이 정의한 함수" << std::endl;
	}
}

int main(void)
{
	BestCompl::SimpleFunc(); // 호출
	ProgComImpl::SimpleFunc(); // 호출

	return 0;
}