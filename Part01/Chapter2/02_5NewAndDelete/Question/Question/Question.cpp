#include <iostream>

using namespace std;

typedef struct __point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
    // �����Ҵ��� �̿��Ͽ� Point ����ü�� ����
    Point* result = new Point;

    // �� ���� ��ǥ�� ���Ͽ� ��� ������ ����
    result->xpos = p1.xpos + p2.xpos;
    result->ypos = p1.ypos + p2.ypos;

    // ������ Point ����ü�� ������ ��ȯ
    return *result;
}

int main(void)
{
    // �� ���� �����Ҵ��Ͽ� �ʱ�ȭ
    Point* p1 = new Point{ 1, 2 };
    Point* p2 = new Point{ 3, 4 };

    // �� ���� ���� ����ϴ� �Լ� ȣ��
    Point& result = PntAdder(*p1, *p2);

    // ��� ���
    cout << "Result: (" << result.xpos << ", " << result.ypos << ")" << endl;

    // �����Ҵ�� �޸� ����
    delete p1;
    delete p2;
    delete& result;

    return 0;
}


// 1. �����Ҵ��� ������ �Լ��� ������ �Ű������� ���ڷ� �����ϴ� ��� :

// �������� �Ҵ�� ������ �����͸� ���� ���޵ȴ�.
// �Լ��� �Ű������� ������(const ���� ����)�� ����ϸ� �Լ� ������ �� ������ ������ �� ����.
// ���� ������ �Ű������� ����Ͽ� �������� �Ҵ�� ������ ������ ������ ������(const ���� ����) �Ǵ� �����͸� ����ؾ� �Ѵ�.

// 2. �Լ� ���� ����� ������ ���������� ��ȯ�Ϸ��� ������ ��� �����ؾ� �ϴ°� :
//
// �Լ� ������ ����� ������ ��ȯ�� ���� �������� ����Ѵ�.
// ������ ��ȯ�� �ϱ� ���ؼ��� ��ȯ Ÿ���� �ش� ������ ���������� �����Ѵ�.
