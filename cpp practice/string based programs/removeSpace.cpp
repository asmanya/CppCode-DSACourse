#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    char str[80];
    cout << "Enter a sentence." << endl;
    cin.getline(str, sizeof(str) );

    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            for(int j = i; j < len; j++){
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }

    cout << "The sentence without spaces is: " << str << endl;


    return 0;
}