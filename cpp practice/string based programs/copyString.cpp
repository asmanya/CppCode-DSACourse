#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[10], str2[10];
    cout << "Enter a string." << endl;
    cin >> str1;

    str2 = str1;

    cout << "String 2: " << str2 << endl;

    return 0;
}