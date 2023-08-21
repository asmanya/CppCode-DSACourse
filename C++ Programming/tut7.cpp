#include <iostream>
using namespace std;

int c = 45;

int main()
{
   
    //BUILD IN DATA TYPES


    int a, b, c;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c <<endl;
    cout<<"The global c is "<<::c;
    cout<<endl;

    
    //FLOAT, DOUBLE AND LONG DOUBLE LITERALS


    float d=34.4f;
    long double e=34.4l;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d <<endl
        <<"The value of e is "<<e;
    cout<<endl;


    //REFERENCE VARIAVBLES


    float x = 455;
    float & y = x;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    cout<<endl;


    //TYPECASTING


    int z= 45;
    int z1 = 45.46;
    cout<<"The value of z is "<<(float)z<<endl;
    cout<<"The value of z is "<<float(z)<<endl;

    cout<<"The value of z1 is "<<(int)z1<<endl;
    cout<<"The value of z1 is "<<int(z1)<<endl;

    int z2 = int(z1);
    cout<<"The expression is "<<z+z1<<endl;
    cout<<"The expression is "<<z+ int(z1)<<endl;
    cout<<"The expression is "<<z+ (int)z1<<endl;
    

    return 0;
} 