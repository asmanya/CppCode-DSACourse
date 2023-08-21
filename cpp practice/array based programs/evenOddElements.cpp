#include<iostream>
using namespace std;

int main()
{
    int num, evenCount = 0, oddCount = 0;
    cout << "Enter the number of elements in array. MAX:20" << endl;
    cin >> num;

    int arr[num];
    cout << "Enter the elements of the array." << endl;
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }

    int even[20], odd[20], j = 0, k = 0;
    for(int i = 0; i < num; i++){
        if(arr[i]%2 == 0){
            even[j] = arr[i];
            j++;
            evenCount++;
        }else{
            odd[k] = arr[i];
            k++;
            oddCount++;
        }
    }

    cout << "Even elements: " << endl;
    for(int i = 0; i < evenCount; i++){
        cout << even[i] << " ";
    }

    cout << "\nOdd elements: " << endl;
    for(int i = 0; i < oddCount; i++){
        cout << odd[i] << " ";
    }

    return 0;
}