#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}


int main(void)
{
	std::cout << Adder() << std::endl; // 매개변수가 지정 되지 않았기에 디폴드 값 1,2가 들어간다.
	std::cout << Adder(5) << std::endl; // 매개변수가 하나 지정되었기에 num1에 5가 들어가고 num2는 디폴드 값 2가 들어간다.
	std::cout << Adder(3,5) << std::endl; //매개변수가 둘 다 지정 되었기에 3,5가 들어간다.

	return 0;
}