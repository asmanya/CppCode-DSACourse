#include<iostream>
using namespace std;

void EvenOddSum(int arr[], int n)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++){
        if( i % 2 == 0){
            even += arr[i];
        }else{
            odd += arr[i];
        }
    }

    cout << "Even index position sum " << even << endl;
    cout << "Odd index position sum" << odd << endl;
}

int main()
{
    
    return 0;
}