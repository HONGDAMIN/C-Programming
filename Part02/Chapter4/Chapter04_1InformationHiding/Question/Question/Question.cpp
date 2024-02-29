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
		if (money < 0) // 사과를 구매하려면 돈이 있어야 하니 돈으로 조건을 걸었다
		{
			cout << "거지는 가라" << endl;
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

	void ShowSalesResult() const // 이곳에 const 선언
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
		if (Money <= 0) // 위와 같은이유
		{
			cout << "외상이요!" << endl;
			return;
		}

		myMoney = Money;
		numOfApples = 0;

	}

	void BuyApples(FruitSaller& seller, int Money)
	{
		if (Money <= 0 || Money >= myMoney)
		{
			cout << "외상으로 할게요" << endl;
			return;
		}

		numOfApples += seller.SaleApples(Money);
		myMoney -= Money;
	}

	void ShowBuyResult() const // const 선언
	{
		cout << "현재 잔액 : " << myMoney << endl;
		cout << "사과 개수 : " << numOfApples << endl;
	}
};

int main(void)
{
	FruitSaller seller;
	seller.InitMembers(0, 0, -300);
	
	FruitBuyer buyer;
	buyer.InitMember(0);
	buyer.BuyApples(seller, 0);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();

	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}