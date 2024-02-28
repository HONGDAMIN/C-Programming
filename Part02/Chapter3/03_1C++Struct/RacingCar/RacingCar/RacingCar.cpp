#include <iostream>

using namespace std;

// ����ü Car�� ���õ� ���� ������ ���ȭ �ߴ�
#define ID_HONG 20 // ID �ִ� ���� 20
#define MAX_SPD 200 // �ִ� �ӵ� 200km/s
#define FUEL_STEP 2 // ���ᰡ �����ϴ� ��
#define ACC_STEP 10 // ���ӽ� �ӵ� ������
#define BRK_STEP 10 // ���ӽ� �ӵ� ���ҷ�

// �ڵ����� ��Ÿ���� ����ü ����
struct Car
{
	char gamerID[ID_HONG]; // ������ID
	int fuelGauge; // ���ᷮ
	int curSpeed; // ����ӵ�
};

// �ڵ����� ���� ��� �Լ�
void ShowCarState(const Car& car)
{
	cout << "������ID : " << car.gamerID << endl;
	cout << "���ᷮ : " << car.fuelGauge << "%" << endl;
	cout << "����ӵ� : " << car.curSpeed << "km/s" << endl << endl;
}

// �ڵ����� ���� ��Ű�� �Լ�
void Accel(Car& car)
{
	if (car.fuelGauge <= 0)
		return; // ���ᰡ 0 ���� �۰ų� ���� ��� �������� ����
	else
		car.fuelGauge -= FUEL_STEP; //���� �Ҹ�

	// ���� �ӵ��� ���� �õ�, �ִ� �ӵ��� �Ѿ�� �ִ� �ӵ��� ����
	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}
	car.curSpeed += ACC_STEP;
}

// �ڵ����� ���� ��Ű�� �Լ�
void Break(Car& car)
{
	if (car.curSpeed < BRK_STEP) // ���� �ӵ��� ���ӷ� ���� ������ �ӵ��� 0���� ����
	{
		car.curSpeed = 0;
		return;
	}
	car.curSpeed -= BRK_STEP; //����
}

int main(void)
{
	// ù ��° �ڵ��� ���� �� ���� �ùķ��̼�
	Car Hyundai_g70 = { "Hyundai g70", 100, 50 }; // ������ID, ���ᷮ, ����ӵ�
	Accel(Hyundai_g70); // ù ��° ����
	Accel(Hyundai_g70); // �� ��° ����
	ShowCarState(Hyundai_g70); // ���� ���
	
	Break(Hyundai_g70); // ����
	ShowCarState(Hyundai_g70); // ���� ���

	// �� ��° �ڵ��� ���� �� ���� �ùķ��̼�
	Car Kia_Stinger = { "Kia Stinger", 70, 100 }; // ������ID, ���ᷮ, ����ӵ�
	Accel(Kia_Stinger);
	Break(Kia_Stinger);
	ShowCarState(Kia_Stinger);

	return 0;
}

