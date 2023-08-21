#include<iostream>
using namespace std;

int main()
{
    char character;
    int result;
    cout << "Enter the character" << endl;
    cin >> character;

    result = toascii(character);
    cout << "The ascii code for " << character << " is " << result << endl;

    return 0;
}