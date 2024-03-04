#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
:upLeft(x1,y1), lowRight(x2,y2) // 멤버 이니셜라이저 리스트를 사용하여 upLeft, lowRight를 초기화
{

}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단 : " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;

	cout << "우 하단 : " << '[' << lowRight.GetX() << ",";
	cout << lowRight.GetY() << ']' << endl;
}
