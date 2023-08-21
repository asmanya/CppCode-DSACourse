#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements." << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array." << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Duplicate elements are: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = i +1; j < n; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}