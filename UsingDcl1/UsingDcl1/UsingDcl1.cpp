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
	using Hybrid::HybFunc; // using�� �̿��ؼ� "�̸����� Hybrid"�� ���ǵ� HyFunc�� ȣ���� ��, �̸������� �������� �ʰ� ȣ���Ѵ�.
	HybFunc(); // �̸������� �������� ������ �������������ڵ� ������� �ʴ´�.

	return 0;
}