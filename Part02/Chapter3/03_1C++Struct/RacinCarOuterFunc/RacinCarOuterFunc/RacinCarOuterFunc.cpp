#include <iostream>

using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState();
	void Accel();
	void Break();
};

void Car::ShowCarState()
{
	cout << "������ID : " << gamerID << endl;
	cout << "���ᷮ : " << fuelGauge << endl;
	cout << "���� �ӵ� : " << curSpeed << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void  Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed = CAR_CONST::BRK_STEP;
}

int main(void)
{
	Car AAA = { "AAA",100,10 };
	AAA.Accel();
	AAA.Accel();
	AAA.ShowCarState();

	AAA.Break();
	AAA.ShowCarState();

	Car BBB = { "BBB",50,190 };
	BBB.Accel();
	BBB.ShowCarState();

	BBB.Break();
	BBB.ShowCarState();

	return 0;
}