#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms in array." << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

     for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "The smallest element of the array is: " << arr[0];

    return 0;
}