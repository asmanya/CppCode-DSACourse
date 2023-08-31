#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sortArr(int *A)
{

}

int main()
{
    int n;
    cout << "Enter array size." << endl;
    cin >> n;

    int Arr[n];
    cout << "Enter the elements of the array." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    cout << "Sorting the array. Sorted array is: " << endl;

    return 0;
}