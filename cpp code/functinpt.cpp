#include<iostream>
using namespace std;

cube();

int main()
{
    int x;
    cout << "Enter an integer value" << endl;
    cin >> x;
    int a = cube(x);
    cout << "The cube of the integer is " << a << endl;

    return 0;
}

void cube(int n){
    return n**3;
}
