#include <iostream>

// �ζ��� �Լ� ��ũ��
#define SQUARE(x) ((x) * (x)) // x�� ����
#define CUBE(x) ((x) * (x) * (x)) // x�� ������

int main() 
{
    // �ζ��� �Լ� ��ũ�� ���
    int squareResult = SQUARE(5);
    int cubeResult = CUBE(3);

    std::cout << "Square: " << squareResult << std::endl;
    std::cout << "Cube: " << cubeResult << std::endl;

    return 0;
}
