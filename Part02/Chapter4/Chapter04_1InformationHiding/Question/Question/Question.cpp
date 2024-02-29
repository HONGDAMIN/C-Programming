#include <iostream>

using namespace std;

class FruitSaller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		if (money < 0) // ����� �����Ϸ��� ���� �־�� �ϴ� ������ ������ �ɾ���
		{
			cout << "������ ����" << endl;
			return ;
		}

		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSalesResult() const // �̰��� const ����
	{
		cout << "���� ��� : " << numOfApples << endl;
		cout << "�Ǹ� ���� : " << myMoney << endl;
	}
};

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;

public:
	void InitMember(int Money)
	{
		if (Money <= 0) // ���� ��������
		{
			cout << "�ܻ��̿�!" << endl;
			return;
		}

		myMoney = Money;
		numOfApples = 0;

	}

	void BuyApples(FruitSaller& seller, int Money)
	{
		if (Money <= 0 || Money >= myMoney)
		{
			cout << "�ܻ����� �ҰԿ�" << endl;
			return;
		}

		numOfApples += seller.SaleApples(Money);
		myMoney -= Money;
	}

	void ShowBuyResult() const // const ����
	{
		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "��� ���� : " << numOfApples << endl;
	}
};

int main(void)
{
	FruitSaller seller;
	seller.InitMembers(0, 0, -300);
	
	FruitBuyer buyer;
	buyer.InitMember(0);
	buyer.BuyApples(seller, 0);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();

	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}