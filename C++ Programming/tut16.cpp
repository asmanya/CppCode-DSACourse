#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

//This will not swap a and b.
//Call by reference by pointers.
void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x= 4, y=5;
    cout<<"The value of x is "<<x<<"\nThe value of y is "<<y<<endl;
    swapPointer(&x,&y);
    cout<<"After swaping\nthe value of x is "<<x<<"\nThe value of y is "<<y<<endl;
    cout<<"The sum of x and y is "<<sum(4,5);
    return 0;
}