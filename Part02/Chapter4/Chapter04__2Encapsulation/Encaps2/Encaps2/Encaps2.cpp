#include <iostream>

using namespace std;

class SinivelCap 
{
public:
	void Take() const
	{
		cout << "�๰�� �� ~ " << endl;
	}
};

class SneezeCap 
{
public:
	void Take() const
	{
		cout << "��ä! ��! ~ " << endl;
	}
};

class SunffleCap
{
public:
	void Take() const
	{
		cout << "�ڰ� �� ~ " << endl;
	}
};

class CONTAC600 // �๰, ��ä��, �ڸ����� �� ����
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


class ColdPatient  // ���� ȯ��, ����600 �ϳ� ����
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