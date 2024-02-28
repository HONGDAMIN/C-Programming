#include <iostream>

using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "true : " << true << endl;
	cout << "false : " << false << endl;

	while (true) // 무한루프 사용을 위해 true 사용, 1로 대신할 수 있다.
	{
		cout << i++ << ' ';
		if (i > num) // i가 10보다 커지면
			break; // 종료된다.
	}
	cout << endl;

	cout << "sizof 1 : " << sizeof(1) << endl; //  상수형 데이터
	cout << "sizeof 0 : " << sizeof(0) << endl; // 크기를 확인하기 위한 문장.
	
	cout << "sizeof true : " << sizeof(true) << endl; // true와
	cout << "sizeof false : " << sizeof(false) << endl; // false의 크기를 확인하기 위한 문장.

	return 0;
}