#include <iostream>

using namespace std;

enum Day
{
	SUNDAY, // 0
	MONDAY, // 1 
	TUESDAY, // 2 
	WEDNESDAY, // 3
	THURSDAY, // 4 
	FRIDAY, // 5
	SATURDAY // 6
};

int main()
{
	Day today = SUNDAY; // ���ϸ� �ٲ��ָ� �ȴ�.

	cout << "Today is " << today << endl; // �Ͽ��Ϸ� ���� �Ǿ������� 0�� ��µȴ�.

	return 0;
}