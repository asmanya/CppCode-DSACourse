#include<iostream>
using namespace std;

int main()
{
    int arr[500], n, sum = 0;
    float avg;
    cout << "Enter the number of terms in array." << endl;
    cin >> n;
    cout << "Enter " << n << " elements in array." << endl;

    for(int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

    for(int i =0; i< n; i++){
        sum += arr[i];
    }

    avg = sum / n;
    cout << "The average of the array is: " << avg << endl;

    return 0;
}