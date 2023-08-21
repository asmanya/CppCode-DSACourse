#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20], c;
    int i, count;

    cout << "Enter a string." << endl;
    cin >> str;
    cout << "Enter a character to find frequency." << endl;
    cin >> c;

    count = 0;
    int len = strlen(str);

    for(i = 0; i < len; i++){
        if(str[i] == c ){
            count++ ;
        }else if(count ==0){
            cout << "No such character exists.";
        }
    }

    cout << "The frequency of character " << c << " is: " << count << endl;

    return 0;
}