#include<iostream>
using namespace std;

int main()
{
    int a =3;
    int* b = &a;
    cout<<"a is 3 and address of a is stored in b\n";
    cout<<"&-->Address of operator.\n"<<"*-->Dereference operator.\n";
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The value at address b is "<<*b<<endl;
    return 0;
}