#include <iostream>

using namespace std;

typedef struct __point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
    // 동적할당을 이용하여 Point 구조체를 생성
    Point* result = new Point;

    // 두 점의 좌표를 더하여 결과 변수에 저장
    result->xpos = p1.xpos + p2.xpos;
    result->ypos = p1.ypos + p2.ypos;

    // 생성된 Point 구조체의 참조를 반환
    return *result;
}

int main(void)
{
    // 두 점을 동적할당하여 초기화
    Point* p1 = new Point{ 1, 2 };
    Point* p2 = new Point{ 3, 4 };

    // 두 점의 합을 계산하는 함수 호출
    Point& result = PntAdder(*p1, *p2);

    // 결과 출력
    cout << "Result: (" << result.xpos << ", " << result.ypos << ")" << endl;

    // 동적할당된 메모리 해제
    delete p1;
    delete p2;
    delete& result;

    return 0;
}


// 1. 동적할당한 변수를 함수의 참조형 매개변수의 인자로 전달하는 방법 :

// 동적으로 할당된 변수는 포인터를 통해 전달된다.
// 함수의 매개변수에 참조형(const 참조 포함)을 사용하면 함수 내에서 이 변수를 수정할 수 없다.
// 따라서 참조형 매개변수를 사용하여 동적으로 할당된 변수를 전달할 때에는 참조형(const 참조 포함) 또는 포인터를 사용해야 한다.

// 2. 함수 내에 선언된 변수를 참조형으로 반환하려면 변수는 어떻게 선언해야 하는가 :
//
// 함수 내에서 선언된 변수를 반환할 때는 참조형을 사용한다.
// 참조형 반환을 하기 위해서는 반환 타입을 해당 변수의 참조형으로 선언한다.
