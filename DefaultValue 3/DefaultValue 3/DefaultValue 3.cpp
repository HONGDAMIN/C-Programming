#include <iostream>

int BoxVolume(int length, int width = 1, int height = 1); // 선언

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl; // 매개변수가 세개 모두 들어갔으니 3,3,3 을 넣어준다.
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl; // 매개변수 2개만 들어갔으니 맨 오른쪽은 디폴드 값을 넣어준다. 5,5,1
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl; //매개변수 1개만 들어갔으니 오른쪽 2개는 디폴드 값을 넣어준다. 7,1,1
	// std::cout << "[D, D, D] : " BoxVolume(3, 3, 3) << std::endl;  첫 번째 매개변수의 디폴드 값이 지정 안되있어서 컴파일 오류가 나온다.

	return 0;
}

int BoxVolume(int length, int width, int height) //정의
{
	return length * width * height;
}