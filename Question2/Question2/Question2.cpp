#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{	// �õ带 ���� �ð����� ����
	srand(static_cast<unsigned int>(time(0))); // srand �Լ��� time(0)�� ����� ������ �� static_cast<unsigned int>�� ����ϴ� ������ 
											  // srand �Լ��� ���� ��ȣ ���� ����(unsigned int)�� �õ�� �ޱ� �����̴�. 
											  // time(0)�� ��ȣ ���� ������ ��ȯ�Ǵµ�, ��������� ����ȯ�� ���ִ� ���� ���� ����ġ ���� ��� ������ �����ϱ� �����̴�.

	// 0�̻� 100�̸��� ���� ����
	for (int i = 0; i < 5; i++) // ���� 5�� ����
	{
		int RandomNumber = rand() % 100;  // ���� ���� 0~99

		cout << "RandomNumber" << i << ":" << RandomNumber << endl;
	}



	return 0;
}