#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in array." << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements of array." << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Reverse array is: " << endl;
    for(int i = 0; i < n/2; i++){
        swap(arr[i], arr[n-1-i]);
    }

    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}