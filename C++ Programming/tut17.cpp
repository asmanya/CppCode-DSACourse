#include<iostream>
using namespace std;

inline int product(int a, int b)
{
    // static int c=0; //initialization condition runs only once.
    // c= c+1; //next time this function is run, the value remains retained.
    return a*b;
}

int moneyreceived(int currentmoney, float factor= 1.04)
{
    return currentmoney*factor;
}

// int strlen(const char *p)
// {
//     return 0;
// }

int main()
{
    int a, b;
    // cout<<"Enter the value of a and b\n";
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyreceived(money)<<" after 1 year."<<endl;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyreceived(money, 1.1)<<" after 1 year."<<endl;
    return 0;
}