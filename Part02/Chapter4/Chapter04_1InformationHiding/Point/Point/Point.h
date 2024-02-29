#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private: // 멤버변수 x,y를 private로 설정해서 임의로 값이 저장되는걸 막았다.
	int x;
	int y;

public: // 값의 저장 및 참조를 위한 함수를 추가로 정의했다.
	bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif // !__POINT_H_
