#include<iostream>
using namespace std;

int main()
{
    int num, n;
    cout << "Enter the number of elements in array." << endl;
    cin >> num;

    int arr[num];
    cout << "Enter the elements of array." << endl;
    for(int i = 0; i < num; i ++){
        cin >> arr[i];
    }

    cout << "Enter the index of number to remove." << endl;
    cin >> n;

    if(n > num-1){
        cout << "Invalid index number." << endl;
    }else{
        for(int i = 0; i < num; i++){
            if(i == n){
                for(int j = n; j < num; j++){
                    arr[j] = arr[j + 1];
                }
            num--;
            }
        }
    }

    cout << "The array is: " << endl;
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }

    return 0;
}