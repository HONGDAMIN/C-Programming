#include <iostream>

using namespace std;

class Point
{
private:
	int xpos;
	int ypos;

public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	Point center;
	int radius;

public: 
	void Init(int x, int y, int z)
	{
		center.Init(x, y);
		radius = z;
	}

	void ShowCircleInfo() const
	{
		cout << "radius" << radius << endl;
		center.ShowPointInfo();
	}
};



class Ring
{
private:
	Circle innerCircle;
	Circle outerCircle;

public:
	void Init(int ix, int iy, int ir, int ox, int oy, int oz) // Ring Ŭ������ ��� ���� innerCircle�� outerCircle�� �ʱ�ȭ�ϴ� �Լ�
	{
		innerCircle.Init(ix, iy, ir);
		outerCircle.Init(ox, oy, oz );
	}

	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		innerCircle.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		outerCircle.ShowCircleInfo();
	}
};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9); // ���� ���� �ʱ�ȭ
	ring.ShowRingInfo();

	return 0;
}