#include <iostream>

using namespace std;

int main(void)
{
	int choice;

	cout << "�޴��� �����ϰŶ� (1 - 3)";
	cin >> choice;

	switch (choice)
	{
	case 1 : 
		cout << "ù ��° �޴���." << endl;
		break;
	case 2 :
		cout << "�� ��° �޴���." << endl;
		break;
	case 3:
		cout << "�� ��° �޴���." << endl;
		break;
	default:
		cout << "��ȿ���� ���� �����̴�." << endl;
		break;
	}

	return 0;
}