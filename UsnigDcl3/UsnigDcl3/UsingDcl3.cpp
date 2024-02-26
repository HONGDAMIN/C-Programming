#include <iostream>

using namespace std; // 이름공간 std에 선언된 모든 것에 대해 이름공간 지정의 생략

int main(void)
{
	int num = 20;

	cout << "HelloWorld!" << endl;           // cout, endl, cin에 더 이상 std::를 안 붙여도 된다.
	cout << "Hello" << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;

	return 0;
}

// 너무 빈번한 usingnamespace의 선언은 이름의 충돌을 막기위한 이름공간의 선언을 의미없게 만단다.
// 따라서 제한적으로 사용할 필요가 있다.