#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc; // using을 이용해서 "이름공간 Hybrid"에 정의된 HyFunc를 호출할 때, 이름공간을 지정하지 않고 호출한다.
	HybFunc(); // 이름공간을 지정하지 않으니 범위지정연산자도 사용하지 않는다.

	return 0;
}