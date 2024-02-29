#include <iostream>

using namespace std;

class SinivelCap // �๰ óġ�� ĸ��
{
public:
	void Take() const
	{
		cout << "�๰�� �� ~ " << endl;
	}
};

class SneezeCap // ��ä�� óġ�� ĸ��
{
public:
	void Take() const
	{
		cout << "��ä! ��! ~ " << endl;
	}
};

class SunffleCap // �ڸ��� óġ�� ĸ��
{
public:
	void Take() const
	{
		cout << "�ڰ� �� ~ " << endl;
	}
};

class ColdPatient // ����ȯ�ڰ� ������ ���
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

	// ������� �����ؾ��Ѵ�.
	Sufferer.TakeSinivelCap(sCap);
	Sufferer.TakeSneezeCap(zCap);
	Sufferer.TakeSuffleCap(fCap);

	return 0;
}