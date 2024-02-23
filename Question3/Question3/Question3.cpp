#include <iostream>

int main(void)
{
	int Number;
	std::cout << "구구단을 출력할 숫자를 입력하세요. ";
	std::cin >> Number;


	std::cout << "단을 출력합니다. ";
	for (int i = 1; i <= 9; ++i)
	{
		std::cout << "X" << i << "=" << Number * i << std::endl;
	}

		return 0; 
}