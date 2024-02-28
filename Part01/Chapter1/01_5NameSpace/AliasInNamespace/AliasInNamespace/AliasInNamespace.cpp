#include <iostream>

using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}

	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC; // 접근법이 불편해서 ABC라는 별칭을 준다.

	cout << ABC::num1 << endl; // 간단하게 접근 가능.
	cout << ABC::num2 << endl;

	return 0;
}