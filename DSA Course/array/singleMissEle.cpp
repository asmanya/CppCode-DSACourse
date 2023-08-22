#include <iostream>
using namespace std;

int main()
{
    int size, x;
    cout << "Enter number of elements in array" << endl;
    cin >> size;

    int A[size];
    cout << "Enter a sorted array." << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }

    cout << "Is array starting from 1? click 1 for yes and 0 for no." << endl;
    cin >> x;

    if (x == 1)
    {
        int sum = 0, n, s;
        for (int i = 0; i < size; i++)
        {
            sum += A[i];
        }
        n = A[size - 1];
        s = n * (n + 1) / 2;
        int diff = s - sum;

        cout << "Missing number is " << diff << endl;
    }
    else if (x == 0)
    {
        int low = A[0];
        for (int i = 0; i < size; i++)
        {
            if (A[i] - i != low)
            {
                cout << "Missing element is " << i + low;
                break;
            }
        }
    }

    return 0;
}