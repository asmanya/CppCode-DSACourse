#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    int i, j, count = 1, len;

    cout << "Enter the sentence." << endl;
    cin.getline(str, sizeof(str));

    len = strlen(str);
    for(i = 0; i < len; i++){
        if(str[i] == ' '){
            count++;
        }
    }

    cout << "The number of words are: " << count << endl;

    return 0;
}