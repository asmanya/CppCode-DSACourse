#include<iostream>
using namespace std;

int main()
{
    int arr1[10], arr2[10], arr3[20], i;
    cout << "Enter the numbers in first array." << endl;
    for(i = 0; i < 10; i++){
        cin >> arr1[i];
    }
    cout << "Enter the numbers in second array." << endl;
    for(i = 0; i < 10; i++){
        cin >> arr2[i];
    }

    for(i = 0; i < 10; i++){
        arr3[i] = arr1[i];
        arr3[i + 10] = arr2[i];
    }

    cout << "The combined array is: " << endl;
    for(i = 0; i < 20; i++){
        cout << arr3[i] << " ";
    }

    return 0;
}