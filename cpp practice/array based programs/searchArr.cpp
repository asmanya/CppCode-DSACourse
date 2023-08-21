#include<iostream>
using namespace std;

int main()
{
    int n, num;
    cout << "Enter number of elements in array." << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array." << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the number to search." << endl;
    cin >> num;

    for(int i = 0; i < n; i++){
        if(num == arr[i]){
            cout << "The number is found at index " << i << endl;
        }
    }

    return 0;
}