#include <iostream>

int main(void)
{
	char name[100]; // name이라는 장소에 100글자까지 담을 수 있다.
	char lang[200]; // lang이라는 장소에 200글자까지 담을 수 있다.
	
	std::cout << "이름은 무엇입니까?";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;

	std::cout << "내 이름은  "<< name <<" 입니다.\n"; // '/n'은 std::endl로 개행의 역할을 대신한다. std::endl 사용해도 무방하다.
	std::cout << "제일 좋아하는 언어는 " << lang << " 입니다." << std::endl;

	return 0;
}