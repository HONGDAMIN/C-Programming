#include <iostream>

using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
	char GamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState()
	{
		cout << "소유자ID : " << GamerID << endl;
		cout << "연료량 : " << fuelGauge << endl;
		cout << "현재 속도 : " << curSpeed << endl;
	}

	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP;
	}
	void Break()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}
		curSpeed -= BRK_STEP;
	}
};

int main(void)
{
	Car BMW = { "BMW",20,150 };
	BMW.Accel();
	BMW.Accel();
	BMW.ShowCarState();

	BMW.Break();
	BMW.ShowCarState();

	Car Audi = { "Audi",50,170 };
	Audi.Accel();
	Audi.Break();
	Audi.ShowCarState();

	return 0;
}