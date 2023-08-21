#include<iostream>
#include<string>
using namespace std;

int main()
{
    string food = "Pizza";
    string *ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr1 = &arr[0];

    cout << *ptr1 << endl;

    ptr1++;
    cout << *ptr1 << endl;

    ptr1 += 2;
    cout << *ptr1 << endl;

    int x = 5;
    int *ptr2 = &x;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;

    int *p = arr + 2;
    cout << *p << endl;
    
    float f = 3.14;
    int *q = (int*)&f;
    cout << *q << endl;

    return 0;
}