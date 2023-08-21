#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter two words" << endl;
    cin >> str1;
    cin >> str2;

    if( str1.compare(str2) == 0){
        cout << str1 << " = " << str2;
    }else if( str1.compare(str2) < 0){
        cout << str1 << " < " << str2;
    }else{
        cout << str1 << " > " << str2;
    }

    return 0;
}