#include "Ractangle.h"
#include <iostream>

using namespace std;

bool Ractangle::InitMembers(const Point& ul, const Point& lr)
{
    if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
    {
        cout << "�߸��� ��ġ���� ����" << endl;
        return false;
    }
    upLeft = ul;
    lowRight = lr;
    return true;
}

void Ractangle::ShowRacInfo() const
{
    cout << "�� ��� : " << '[' << upLeft.GetX() << ", ";
    cout << upLeft.GetY() << ']' << endl;
    cout << "�� �ϴ� : " << '[' << lowRight.GetX() << ", ";
    cout << lowRight.GetY() << ']' << endl << endl;
}
