#ifndef __ RECTANGLE_H_
#define __ RECTANGLE_H_
#include "Point.h"

class Ractangle // 멤버변수 unLeft, lowRight를 private로 설정해서 임의로 값이 저장되는걸 막았다.
{
private:
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRacInfo() const;
};
#endif