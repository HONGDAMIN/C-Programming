#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <cstring>

using namespace std;

int main(void) 
{
    // strlen, ���ڿ��� ���� ���
    const char* str1 = "Hello";

    cout << "Length of str1: " << strlen(str1) << endl;

    // strcpy�� strcat, ���ڿ� ����, ���ڿ� �ڿ� �� ���̱�
    char dest[20];
    strcpy(dest, "World");

    cout << "Copied string: " << dest << endl;

    strcat(dest, "!");

    cout << "Concatenated string: " << dest << endl;

    // strcmp , ���ڿ��� ��
    const char* str2 = "Hello,World!";
    if (strcmp(dest, str2) == true) 
    {
        cout << "Strings are equal." << endl;
    }
    else 
    {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}
