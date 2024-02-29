#include <iostream>

using namespace std;

class SimpleClass
{
private:
	int num;

public:
	void InitNum(int n)
	{
		num = n;
	}

	int GetNum()  // const 선언이 추가되어야 아래의 컴파일 에러가 소멸된다.
	{
		return num;
	}

	void ShowNum() const
	{
		cout << GetNum() << endl; // 컴파일 에러 발생, const 함수 내에서는 const가 아닌 함수의 호출이 제한된다.
	}
};