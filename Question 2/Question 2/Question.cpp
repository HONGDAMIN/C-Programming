// 다음과 같은 형태로의 함수 오버로딩은 문제가 있다.
// 어떠한 문제가 있는지 설명해보자.

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

// SimpleFunc( )는 어떤 함수를 불러와야 하는지 모른다.
// 호출할 함수가 정의 되어있지 않다.