#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a;
    cout<<endl;
    cout<<"Enter the value of single digit number "<<endl;
    cin>>a;
    
    cout<<endl;
    cout<<"Your rectangle is"<<endl;
    cout<<a<<a<<a<<a<<a<<a<<endl;
    cout<<a;
    cout<<setw(5)<<a<<endl;
    cout<<a<<a<<a<<a<<a<<a<<endl;
    cout<<endl;

    return 0;
}