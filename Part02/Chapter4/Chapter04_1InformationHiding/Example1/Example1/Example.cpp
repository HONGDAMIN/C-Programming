#include <iostream>

using namespace std;

class SimpleClass
{
private:
	int num;

public:
	void InitNum(int n)
	{
		num = n;
	}

	int GetNum()  // const ������ �߰��Ǿ�� �Ʒ��� ������ ������ �Ҹ�ȴ�.
	{
		return num;
	}

	void ShowNum() const
	{
		cout << GetNum() << endl; // ������ ���� �߻�, const �Լ� �������� const�� �ƴ� �Լ��� ȣ���� ���ѵȴ�.
	}
};