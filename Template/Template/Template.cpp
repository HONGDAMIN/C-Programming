#include <iostream>

template <typename T> // ���ø� ����
inline T SQUARE(T x)
{
	return x * x;
}

int main(void)
{
	std::cout<< SQUARE(5.5) << std::endl; // �������� �ս��� �߻� �����ʴ´�.
	std::cout << SQUARE(12) << std::endl;
	
	return 0;
}