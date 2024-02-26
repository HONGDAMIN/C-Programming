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
	Day today = SUNDAY; // 요일만 바꿔주면 된다.

	cout << "Today is " << today << endl; // 일용일로 설정 되어있으니 0이 출력된다.

	return 0;
}