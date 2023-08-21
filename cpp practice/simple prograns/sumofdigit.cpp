#include<iostream>
using namespace std;

int main()
{
    int sum = 0, a, num;
    cout << "Input a number of your choice." << endl;
    cin >> num;

    while(num > 0){
        a = num % 10;
        num = num /10;
        sum = sum + a;
    }

    cout << "The sum of digits is equal to " << sum << endl;

    return 0;
}