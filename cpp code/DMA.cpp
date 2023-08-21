#include<iostream>
using namespace std;

void modify(int *ptr){
    *ptr = 10;
}

void modifyy(int x){
    x = 10;
}

int add(int a, int b){
    return a + b;
}

int main()
{
    // int *p = new int;
    // *p = 5;
    // delete p;
    // p = NULL; 

    int x = 5;
    modifyy(x);
    cout << x << endl;

    modify(&x);
    cout << x << endl;

    int (*p)(int, int);
    p = &add;
    int result = (*p)(5, 10);
    cout << result << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout << *ptr << endl;
    cout << *(ptr + 2) << endl;

    return 0;
}