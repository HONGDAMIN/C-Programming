#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 번째 숫자입력 : ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자입력 : ";
	std::cin >> val2;

	int val3;
	std::cout << "세 번째 숫자입력 : ";
	std::cin >> val3;

	int val4;
	std::cout << "네 번째 숫자입력 : ";
	std::cin >> val4;

	int val5;
	std::cout << "다섯 번째 숫자입력 : ";
	std::cin >> val5;

	int result = val1 + val2 + val3 + val4 + val5;
	std::cout << "덧셈 결과 : " << result << std::endl;

	return 0;
}