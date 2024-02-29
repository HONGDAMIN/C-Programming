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

	void ShowSalesResult()
	{
		cout << "남은 사과 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl;
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
		myMoney = Money;
		numOfApples = 0;

	}

	void BuyApples(FruitSaller& seller, int Money)
	{
		numOfApples += seller.SaleApples(Money);
		myMoney -= Money;
	}

	void ShowBuyResult()
	{
		cout << "현재 잔액 : " << myMoney << endl;
		cout << "사과 개수 : " << numOfApples << endl;
	}
};

int main(void)
{
	FruitSaller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMember(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();

	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}