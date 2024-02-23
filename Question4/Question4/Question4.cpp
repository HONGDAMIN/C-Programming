#include <iostream>

int main(void)
{
	while (true) // 무한 루프를 걸기 위해서, 특정 조건이 성립하면 종료한다. while,if 구조.
	{
		std::cout << "물품 판매금액을 입력하세요. (-1 입력시 종료) ";
		double SaleAmount; // double을 사용하는 이유는 소수점까지 나타낼수 있기때문. int는 정수 표현만 가능
		std::cin >> SaleAmount;

		if (SaleAmount == -1) // 무한루프 탈출문
		{
			std::cout << "프로그램을 종료합니다. " << std::endl;
			break;
		}

		double BaseSalary = 50; // 기본급여
		double Commision = SaleAmount * 0.12; //인센티브
		double TotalSalary = BaseSalary + Commision; // 총 급여

		std::cout << "이번달 기본급여는 " << BaseSalary << "만원 입니다. " << std::endl;
		std::cout << "이번달 인센티브는 " << Commision << "만원 입니다. " << std::endl;
		std::cout << "이번달 급여는 " << TotalSalary << "만원 입니다. " << std::endl;

	}

	return 0;
}