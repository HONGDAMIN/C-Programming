#ifndef __ RECTANGLE_H_
#define __ RECTANGLE_H_
#include "Point.h"

class Ractangle // ������� unLeft, lowRight�� private�� �����ؼ� ���Ƿ� ���� ����Ǵ°� ���Ҵ�.
{
private:
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRacInfo() const;
};
#endif