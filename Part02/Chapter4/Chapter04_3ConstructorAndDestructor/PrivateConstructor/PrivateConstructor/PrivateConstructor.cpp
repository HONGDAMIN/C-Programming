#include <iostream>

using namespace std;

class AAA
{
private:
	int num;
	
public:
	AAA() 
		: num(0)
	{

	}

	AAA& CreateInintObj(int n) const
	{
		AAA* ptr = new AAA(n);

		return *ptr;
	}

	void ShowNum() const
	{
		cout << num << endl;
	}

private:
	AAA(int n) 
		: num(n) // private�� ����� �����ڸ� ���ؼ��� ��ü�� ������ �������� �����ش�.
	{

	}
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInintObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInintObj(12);
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;

	return 0;
}
