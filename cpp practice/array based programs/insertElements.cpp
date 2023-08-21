#include<iostream>
using namespace std;

int main()
{
    int arr[5], n, i, num;
    cout << "Enter 5 elements of array." << endl;
    for(i = 0; i < 5; i++){
        cin >> arr[i];
    }

    for(i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << "\nEnter index of element to change." << endl;
    cin >> n;

    if(n > 5){
        cout << "This is out of range.";
    }else{
        cout << "Enter new number." << endl;
        cin >> num;
    }

    for(i = 0; i< 5; i++){
        if(i == n){
            arr[i] = num;
        }
    }

    cout << "New array is: ";
    for(i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}