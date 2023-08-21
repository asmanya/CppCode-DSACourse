#include<iostream>
using namespace std;

int main()
{
    int num, rem[20], i = 0, j;
    cout << "Enter the number." << endl;
    cin >> num;

    while(num > 0){
        rem[i] = num % 2;
        i++;
        num = num /2;
    }
    cout << "Equivalent binary number is ";
    for(j = i-1; j >= 0; j--){
        cout << rem[j];
    }

    return 0;
}