#include <iostream>

using namespace std;

class Point
{
private:
    int xpos;
    int ypos;

public:
    // 생성자 추가
    Point(int x = 0, int y = 0) 
        : xpos(x), ypos(y) 
    {
    }

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
    // 생성자 추가
    Circle(int x = 0, int y = 0, int r = 0) 
        : center(x, y), radius(r) 
    {
    }

    void Init(int x, int y, int r)
    {
        center.Init(x, y);
        radius = r;
    }

    void ShowCircleInfo() const
    {
        cout << "radius: " << radius << endl;
        center.ShowPointInfo();
    }
};

class Ring
{
private:
    Circle innerCircle;
    Circle outerCircle;

public:
    // 생성자 추가
    Ring(int ix = 0, int iy = 0, int ir = 0, int ox = 0, int oy = 0, int oz = 0)
        : innerCircle(ix, iy, ir), outerCircle(ox, oy, oz)
    {

    }

   
    void Init(int ix, int iy, int ir, int ox, int oy, int oz)
    {
        innerCircle.Init(ix, iy, ir);
        outerCircle.Init(ox, oy, oz);
    }

    void ShowRingInfo() const
    {
        cout << "Inner Circle Info..." << endl;
        innerCircle.ShowCircleInfo();
        cout << "Outer Circle Info..." << endl;
        outerCircle.ShowCircleInfo();
    }
};

int main(void)
{
    Ring ring; 
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();

    return 0;
}
