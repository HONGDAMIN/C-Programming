#include <iostream> 

using namespace std;

class FruitSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int price, int num, int money)
		:APPLE_PRICE(price), numOfApples(num),myMoney(money) // const �Լ��� �̴ϼȶ���� ���ؼ� �ʱ�ȭ �� �� �ִ�.
	{

	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;

		return num;
	}
	
	void ShowSalesResult() const
	{
		cout << "���� ���" << numOfApples << endl;
		cout << "�Ǹ� ����" << myMoney << endl << endl;
	}

};

class FruitBuyer
{
private:
	int myMoney;
	int numOfApplels;

public:
	FruitBuyer(int money)
		:myMoney(money), numOfApplels(0)
	{

	}

	void BuyApples(FruitSeller& seller, int money)
	{
		numOfApplels += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult() const
	{
		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "��� ���� : " << numOfApplels << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();

	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}