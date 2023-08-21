#include <iostream>
using namespace std;

int main()
{
    int n, max;
    cout << "Enter the number the elements in the array." << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum Element of the array is: " << max;

    return 0;
}