#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

enum COMP_POS { CLERK, SENIOR, ASSIST, MANAGER };

class NameCard
{
private:
    char* name;
    char* company;
    char* phone;
    int position;

public:
    // 생성자 추가
    NameCard(const char* n, const char* c, const char* p, int pos)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);

        company = new char[strlen(c) + 1];
        strcpy(company, c);

        phone = new char[strlen(p) + 1];
        strcpy(phone, p);

        position = pos;
    }

    // 소멸자 추가
    ~NameCard()
    {
        delete[] name;
        delete[] company;
        delete[] phone;
    }

    void ShowNameCardInfo() const
    {
        cout << "이름 : " << name << endl;
        cout << "회사 : " << company << endl;
        cout << "전화번호 : " << phone << endl;

        cout << "직급 : ";
        switch (position)
        {
        case CLERK:
            cout << "사원";
            break;
        case SENIOR:
            cout << "주임";
            break;
        case ASSIST:
            cout << "대리";
            break;
        case MANAGER:
            cout << "과장";
            break;
        default:
            cout << "알 수 없음";
        }

        cout << endl
            << endl;
    }
};

int main(void)
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();

    return 0;
}
