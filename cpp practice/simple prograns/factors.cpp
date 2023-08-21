#include<iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "Enter any positive integer." << endl;
    cin >> num;

    cout << "Factors of " << num << " are ";
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            cout << i << ", " ;
        }
    }

    return 0;
}