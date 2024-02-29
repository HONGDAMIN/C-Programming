#include "Point.h"
#include <iostream>

using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
    if (xpos < 0 || ypos < 0) // || = or , xpos가 0보다 작거나 ypos가 0 보다 작으면 초기화를 하지 않고 false로 반환한다.
    {
        cout << "벗어난 범위의 값 전달" << endl;
        return false; 
    }

    x = xpos;
    y = ypos;
    return true;
}

int Point::GetX() const
{   
    return x;
}

int Point::GetY() const
{
    return y;
}

bool Point::SetX(int xpos)
{
    if (0 > xpos || xpos > 100)
    {
        cout << "벗어난 범위의 값 전달" << endl;
        return false;
    }
    x = xpos;
    return true;
}

bool Point::SetY(int ypos)
{   
    if (0 > ypos || ypos > 100)
    {
        cout << "벗어난 범위의 값 전달" << endl;
        return false;
    }
    y = ypos;
    return true;
}
