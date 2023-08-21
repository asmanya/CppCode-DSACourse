#include<iostream>
using namespace std;

int main()
{
    int num, count;
    count = 0;
    cout << "Enter a number." << endl;
    cin >> num;

    if(num <= 1){
        cout << "Smallest prime number is 2." << endl;
    }

    for( int i = 2; i <= num; i++){ 
        if(num%i == 0){
            count = count + 1;
        }
    }

    if(count == 1){
            cout << "The number is prime." << endl;
        } else {
            cout << "The number is not prime." << endl;
        }

    return 0;
}