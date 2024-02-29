#include <iostream>
#include "Point.h"
#include "Ractangle.h"

using namespace std;

int main(void)
{
	Point pos1;
	if (!pos1.InitMembers(-2, 4)) // 만약 (-2,4) 좌표로 'pos1'의 초기화가 실패하면 아래 출력
		cout << "초기화 실패" << endl;
	if (!pos1.InitMembers(2,4))
		cout << "초기화 실패" << endl;

	Point pos2;
	if (!pos2.InitMembers(5, 9))
		cout << "초기화 실패" << endl;

	Ractangle rec;
	if (!rec.InitMembers(pos2, pos1))
		cout << "직사각형 초기화 실패" << endl;
	if (!rec.InitMembers(pos1, pos2))
		cout << "직사각형 초기화 실패" << endl;

	rec.ShowRacInfo();
	return 0;
}