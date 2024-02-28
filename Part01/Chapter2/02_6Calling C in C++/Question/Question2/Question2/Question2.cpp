#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{	// 시드를 현재 시간으로 변경
	srand(static_cast<unsigned int>(time(0))); // srand 함수에 time(0)의 결과를 전달할 때 static_cast<unsigned int>를 사용하는 이유는 
											  // srand 함수가 보통 부호 없는 정수(unsigned int)를 시드로 받기 때문이다. 
											  // time(0)는 부호 없는 정수로 반환되는데, 명시적으로 형변환을 해주는 것은 형식 불일치 관련 경고나 문제를 방지하기 위함이다.

	// 0이상 100미만의 난수 생성
	for (int i = 0; i < 5; i++) // 난수 5개 생성
	{
		int RandomNumber = rand() % 100;  // 숫자 범위 0~99

		cout << "RandomNumber" << i << ":" << RandomNumber << endl;
	}



	return 0;
}