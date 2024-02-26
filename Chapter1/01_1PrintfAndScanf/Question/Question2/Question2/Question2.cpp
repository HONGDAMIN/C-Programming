#include <iostream>

int main(void)
{
	char Name[50];
	char Number[50];

	std::cout << "이름이 무엇입니까? ";
	std::cin >> Name;

	std::cout << "전화번호가 무엇입니까? ";
	std::cin >> Number;

	std::cout << "본좌는 " << Name << "이다." << std::endl;
	std::cout << "번화는 " << Number << "이다." << std::endl;

	return 0;
}