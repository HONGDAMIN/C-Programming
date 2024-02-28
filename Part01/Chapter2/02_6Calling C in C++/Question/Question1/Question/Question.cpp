#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <cstring>

using namespace std;

int main(void) 
{
    // strlen, 문자열의 길이 계산
    const char* str1 = "Hello";

    cout << "Length of str1: " << strlen(str1) << endl;

    // strcpy와 strcat, 문자열 복사, 문자열 뒤에 덧 붙이기
    char dest[20];
    strcpy(dest, "World");

    cout << "Copied string: " << dest << endl;

    strcat(dest, "!");

    cout << "Concatenated string: " << dest << endl;

    // strcmp , 문자열의 비교
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
