#include <iostream>

using namespace std;

class SinivelCap // 콧물 처치용 캡슐
{
public:
	void Take() const
	{
		cout << "콧물이 싹 ~ " << endl;
	}
};

class SneezeCap // 재채기 처치용 캡슐
{
public:
	void Take() const
	{
		cout << "재채! 기! ~ " << endl;
	}
};

class SunffleCap // 코막힘 처치용 캡슐
{
public:
	void Take() const
	{
		cout << "코가 뻥 ~ " << endl;
	}
};

class ColdPatient // 감기환자가 복용할 약들
{
public:
	void TakeSinivelCap(const SinivelCap& Cap) const
	{
		Cap.Take();
	}

	void TakeSneezeCap(const SneezeCap& Cap) const
	{
		Cap.Take();
	}

	void TakeSuffleCap(const SunffleCap& Cap) const
	{
		Cap.Take();
	}
};

int main(void)
{
	SinivelCap sCap;
	SneezeCap zCap;
	SunffleCap fCap;

	ColdPatient Sufferer;

	// 순서대로 복용해야한다.
	Sufferer.TakeSinivelCap(sCap);
	Sufferer.TakeSneezeCap(zCap);
	Sufferer.TakeSuffleCap(fCap);

	return 0;
}