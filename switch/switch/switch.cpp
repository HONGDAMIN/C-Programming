#include <iostream>

using namespace std;

int main(void)
{
	int choice;

	cout << "메뉴를 선택하거라 (1 - 3)";
	cin >> choice;

	switch (choice)
	{
	case 1 : 
		cout << "첫 번째 메뉴다." << endl;
		break;
	case 2 :
		cout << "두 번째 메뉴다." << endl;
		break;
	case 3:
		cout << "세 번째 메뉴다." << endl;
		break;
	default:
		cout << "유효하지 않은 선택이다." << endl;
		break;
	}

	return 0;
}