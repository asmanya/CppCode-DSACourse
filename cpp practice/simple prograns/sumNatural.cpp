#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter range of numbers." << endl;
    cin >> num;

    for(int i = 1; i <= num; i++){
        sum = sum + i;
    }

    cout << "The sum is equal to " << sum;

    return 0;
}