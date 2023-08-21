#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100], temp;
    int i, j, len;

    cout << "Enter a string." << endl;
    cin >> str;

    len = strlen(str);
    for(i = 0, j = len -1; i < j; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout << "Reverse string is: " << str;

    return 0;
}