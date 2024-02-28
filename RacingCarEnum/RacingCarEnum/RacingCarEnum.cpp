#include <iostream>

using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MXA_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 190
	};
}

struct Car
{
	char GamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState()
	{
		cout << "소유자ID : " << GamerID << endl;
		cout << "연료량 : " << fuelGauge << endl;
		cout << "현재속도 : " << curSpeed << endl;
	}

	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= CAR_CONST::FUEL_STEP;

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MXA_SPD)
		{
			curSpeed = CAR_CONST::MXA_SPD;
			return;
		}
		curSpeed += CAR_CONST::ACC_STEP;
	}
	
	void Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}
		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

int main(void)
{
	Car Bongo = { "Bongo", 8, 170 };
	Bongo.Accel();
	Bongo.Accel();
	Bongo.ShowCarState();

	Bongo.Break();
	Bongo.ShowCarState();

	Car Poter = { "Poter", 30, 200 };
	Poter.Accel();
	Poter.ShowCarState();

	Poter.Break();
	Poter.ShowCarState();

	return 0;
}

