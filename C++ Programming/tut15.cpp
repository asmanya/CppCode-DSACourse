#include<iostream>
using namespace std;

int sum(int a, int b);
void g(void);

int main()
{
    int num1 , num2;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters.
    // a and b are the formal parameters.
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b)
{  
    int c = a +b;
    return c;
}

void g()
{
    cout<<"\nHello! Yeah boi.";
}