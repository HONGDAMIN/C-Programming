#include <iostream>

namespace Parent
{
	int num = 2; // Parent::nem

	namespace SubOne
	{
		int num = 3; // Parent::SubOne::num
	}

	namespace SubTwo
	{
		int num = 4; // Parent::SubTwo::num
	}
}

int main(void)
{
	std::cout << Parent::num << std::endl;
	std::cout << Parent::SubOne::num << std::endl;
	std::cout << Parent::SubTwo::num << std::endl;
}