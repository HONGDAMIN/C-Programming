#include <iostream>

// 인라인 함수 매크로
#define SQUARE(x) ((x) * (x)) // x의 제곱
#define CUBE(x) ((x) * (x) * (x)) // x의 세제곱

int main() 
{
    // 인라인 함수 매크로 사용
    int squareResult = SQUARE(5);
    int cubeResult = CUBE(3);

    std::cout << "Square: " << squareResult << std::endl;
    std::cout << "Cube: " << cubeResult << std::endl;

    return 0;
}
