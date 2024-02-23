#include <iostream>

int Adder(int num1 = 1, int num2 = 2); // 선언, 매개변수 디폴드 값 지정은 선언부분에 위치.

int main(void)
{
	std::cout << Adder() << std::endl; // 매개변수가 비었으니 디폴드 값 1, 2 삽입.
	std::cout << Adder(5) << std::endl; // 매개변수 5한개 5,디폴드 값 2 삽입.
	std::cout << Adder(3,5) << std::endl; // 매개변수 2개 , 3,5 삽입

	return 0;
}

int Adder(int num1, int num2) // 정의
{
	return num1 + num2;
}