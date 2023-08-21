#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string str;
    int num;
    cout << "Enter any string." << endl;
    getline (cin, str);
    num = str.length();

    cout << "The length of string is " << num;

    return 0;
}