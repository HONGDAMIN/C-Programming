#include <iostream>

using namespace std;

class SinivelCap 
{
public:
	void Take() const
	{
		cout << "콧물이 싹 ~ " << endl;
	}
};

class SneezeCap 
{
public:
	void Take() const
	{
		cout << "재채! 기! ~ " << endl;
	}
};

class SunffleCap
{
public:
	void Take() const
	{
		cout << "코가 뻥 ~ " << endl;
	}
};

class CONTAC600 // 콧물, 재채기, 코막힘을 한 번에
{

private:
	SinivelCap sin;
	SneezeCap sne;
	SunffleCap sun;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		sun.Take();
	}
};


class ColdPatient  // 감기 환자, 콘택600 하나 복용
{
public:
	void TakeCONTAK600(const CONTAC600& cap) const
	{
		cap.Take();
	}
};

int main(void)
{
	CONTAC600 cap;

	ColdPatient Sufferer;
	Sufferer.TakeCONTAK600(cap);

	return 0;
}