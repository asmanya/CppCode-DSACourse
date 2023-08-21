#include<iostream>
using namespace std;

int main()
{
    int a, rev = 0,b , num;
    cout << "Enter a number." << endl;
    cin >> num;
    b = num;
    
    while(num > 0){
        a = num % 10;
        num = num /10;
        rev = rev* 10 + a;
    }

    if(rev == b){
        cout << "Pelindrome number" << endl;
    }else {
        cout << "Not palindrome.";
    }

    return 0;
}