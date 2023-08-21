#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1, str2, temp;
    cout << "Enter the first string." << endl;
    cin >> str1;
    cout << "Enter the second string." << endl;
    cin >> str2;

    swap(str1, str2);

    cout << "The first string after swap is: " << str1 << endl;
    cout << "The second string after swap is: " << str2  << endl;
    
    return 0;
}