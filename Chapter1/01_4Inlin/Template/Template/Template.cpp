#include <iostream>

template <typename T> // 템플릿 정의
inline T SQUARE(T x)
{
	return x * x;
}

int main(void)
{
	std::cout<< SQUARE(5.5) << std::endl; // 데이터의 손실이 발생 하지않는다.
	std::cout << SQUARE(12) << std::endl;
	
	return 0;
}