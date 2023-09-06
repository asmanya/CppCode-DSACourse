#include<iostream>
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

    if(x == 1)
    {
        
    }

    return 0;
}