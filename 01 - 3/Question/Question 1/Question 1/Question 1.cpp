#include <iostream>

// 함수의 오버로딩을 사용
int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);

int main(void)
{
    std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
    std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
    std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;

    return 0;
}

// 첫 번째 함수 정의
int BoxVolume(int length, int width, int height)
{
    return length * width * height;
}

// 두 번째 함수 정의 (width에 대한 기본값 1 지정)
int BoxVolume(int length, int width)
{
    return BoxVolume(length, width, 1);
}

// 세 번째 함수 정의 (width와 height에 대한 기본값 1 지정)
int BoxVolume(int length)
{
    return BoxVolume(length, 1, 1);
}
