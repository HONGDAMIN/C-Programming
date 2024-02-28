#include <iostream>

using namespace std;

// 구조체 Car와 관련된 각종 정보를 상수화 했다
#define ID_HONG 20 // ID 최대 길이 20
#define MAX_SPD 200 // 최대 속도 200km/s
#define FUEL_STEP 2 // 연료가 감소하는 양
#define ACC_STEP 10 // 가속시 속도 증가량
#define BRK_STEP 10 // 감속시 속도 감소량

// 자동차를 나타내는 구조체 정의
struct Car
{
	char gamerID[ID_HONG]; // 소유자ID
	int fuelGauge; // 연료량
	int curSpeed; // 현재속도
};

// 자동차의 상태 출력 함수
void ShowCarState(const Car& car)
{
	cout << "소유자ID : " << car.gamerID << endl;
	cout << "연료량 : " << car.fuelGauge << "%" << endl;
	cout << "현재속도 : " << car.curSpeed << "km/s" << endl << endl;
}

// 자동차를 가속 시키는 함수
void Accel(Car& car)
{
	if (car.fuelGauge <= 0)
		return; // 연료가 0 보다 작거나 같을 경우 가속하지 않음
	else
		car.fuelGauge -= FUEL_STEP; //연료 소모

	// 현재 속도에 가속 시도, 최대 속도를 넘어가면 최대 속도로 설정
	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}
	car.curSpeed += ACC_STEP;
}

// 자동차를 감속 시키는 함수
void Break(Car& car)
{
	if (car.curSpeed < BRK_STEP) // 현재 속도가 감속량 보다 작으면 속도를 0으로 설정
	{
		car.curSpeed = 0;
		return;
	}
	car.curSpeed -= BRK_STEP; //감속
}

int main(void)
{
	// 첫 번째 자동차 생성 및 동작 시뮬레이션
	Car Hyundai_g70 = { "Hyundai g70", 100, 50 }; // 소유자ID, 연료량, 현재속도
	Accel(Hyundai_g70); // 첫 번째 가속
	Accel(Hyundai_g70); // 두 번째 가속
	ShowCarState(Hyundai_g70); // 상태 출력
	
	Break(Hyundai_g70); // 감속
	ShowCarState(Hyundai_g70); // 상태 출력

	// 두 번째 자동차 생성 및 동작 시뮬레이션
	Car Kia_Stinger = { "Kia Stinger", 70, 100 }; // 소유자ID, 연료량, 현재속도
	Accel(Kia_Stinger);
	Break(Kia_Stinger);
	ShowCarState(Kia_Stinger);

	return 0;
}

