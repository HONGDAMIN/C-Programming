#define _CRT_SECURE_NO_WARNINGS // strcpy ��� ��ȿȭ

#include <iostream>
#include <cstring>

using namespace std;

const int NAME_LEN = 20;

void ShowMenu(void); // �޴� ���
void MakeAccount(void); // ���°����� ���� �Լ�
void DepositMoney(void); // �� ��
void WihtdrawMoney(void); // �� ��
void ShowAllAccInfo(void); // �ܾ���ȸ

enum
{
	Make =1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	EXIT
};

typedef struct
{
	int accID; // ���� ��ȣ
	int balance; // �� ��
	char cusName[NAME_LEN]; // �� �̸�
}Account;

Account accArr[100]; // Account ������ ���� �迭
int accNum = 0; // ����� Account ��

int main(void)
{
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "����: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case Make:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WihtdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection..." << endl;
		}
	}
	return 0;
}

void ShowMenu(void)
{
	cout << "----Menu----" << endl;
	cout << "1. ���°��� " << endl;
	cout << "2. �Ա� " << endl;
	cout << "3. ��� " << endl;
	cout << "4. �������� ��ü ��� " << endl;
	cout << "5. ���α׷� ���� " << endl;
}

void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "���� ID : "; cin >> id;
	cout << "�� �� : ";cin >> name;
	cout << "�Աݾ� : ";cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy(accArr[accNum].cusName, name);
	accNum++;

	cout << "���°� ���������� �����Ǿ����ϴ�." << endl << endl;
}

void DepositMoney(void)
{
	int money;
	int id;
	
	cout << "[�� ��]" << endl;
	cout << "���� ID";cin >> id;
	cout << "�Աݾ� : ";cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID = id)
		{
			accArr[i].balance += money;
			cout << "�Ա� �Ϸ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}
void  WihtdrawMoney(void)
{
	int money;
	int id;
	cout << "[�� ��]" << endl;
	cout << "���� ID";
	cin >> id;
	cout << "��ݾ� : ";
	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money)
			{
				cout << "�ܾ� ����" << endl << endl; 

				return;
			}


			accArr[i].balance -= money;

			cout << "��� �Ϸ�" << endl << endl;

			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "���� ID" << accArr[i].accID << endl;
		cout << "�̸� : " << accArr[i].cusName << endl;
		cout << "�ܾ� :" << accArr[i].balance << endl << endl;

	}
}







