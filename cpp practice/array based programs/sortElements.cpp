#include<iostream>
#include<string>
using namespace std;

int main()
{
    int arr[10];
    cout << "Enter the numbers to sort." << endl;
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    cout << "The number before sorting are: " << endl;
    for(int i = 0; i < 10; i++){
        cout << arr[i] << ", " ;
    }

    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if( arr[i] < arr[j] ){
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "\n The numbers after sorting are: " << endl;
    for(int j = 0; j < 10; j++){
        cout << arr[j] << ", " ;
    }

    return 0;
}