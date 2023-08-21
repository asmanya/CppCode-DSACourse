#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str1, str2, str;
    cout << "Enter first string." << endl;
    cin >> str1;
    cout << "Enter second string." << endl;
    cin >> str2;

    str = str1 + " " + str2;
    cout << "The concatenate string is: " << endl <<str ;

    return 0;
}