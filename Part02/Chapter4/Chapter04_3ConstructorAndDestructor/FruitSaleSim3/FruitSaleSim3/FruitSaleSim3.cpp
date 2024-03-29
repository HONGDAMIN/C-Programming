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
		:APPLE_PRICE(price), numOfApples(num),myMoney(money) // const 함수도 이니셜라이즈를 통해서 초기화 할 수 있다.
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
		cout << "남은 사과" << numOfApples << endl;
		cout << "판매 수익" << myMoney << endl << endl;
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
		cout << "현재 잔액 : " << myMoney << endl;
		cout << "사과 개수 : " << numOfApplels << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();

	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}