#include <iostream>

using namespace std;

class Calculator
{
private: // ��� Ƚ���� ����ϴ� ����
	int numOfAdd;
	int numOfMin;
	int numOfMul;
	int numOfDiv;

public:
	void Init();
	double Add(double num1, double num2);
	double Min(double num1, double num2);
	double Mul(double num1, double num2);
	double Div(double num1, double num2);
	void ShowNum();
};

void Calculator::Init() // ��� ���� �ʱ�ȭ
{
	numOfAdd = 0;
	numOfMin = 0;
	numOfMul = 0;
	numOfDiv = 0;
}

double Calculator::Add(double num1, double num2)
{
	numOfAdd++;
	return num1 + num2;
}

double Calculator::Min(double num1, double num2)
{
	numOfMin++;
	return num1 - num2;
}

double Calculator::Mul(double num1, double num2)
{
	numOfMul++;
	return num1 * num2;
}

double Calculator::Div(double num1, double num2)
{
	numOfDiv++;
	return num1 / num2;
}

void Calculator::ShowNum() // ���� Ƚ���� ����ϴ� �Լ�
{
	cout << "���� : " << numOfAdd << endl;
	cout << "���� : " << numOfMin << endl;
	cout << "���� : " << numOfMul << endl;
	cout << "������ : " << numOfDiv << endl;

}

int main(void)
{
	Calculator cal;
	cal.Init(); // ���� �ʱ�ȭ
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowNum();

	return 0;
}
