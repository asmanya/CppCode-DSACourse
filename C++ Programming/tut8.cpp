#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a =34;
    cout<<endl;
    cout<<"The value of a was "<<a<<endl;
    a=45;
    cout<<"The value of a is "<<a<<endl;
    cout<<endl;

    //CONSTANTS IN C++ : THERE VALUES CAN NOT BE CHANGED

    const float pi =3.14;
    cout<<"The value of pi is "<<pi <<endl;
    cout<<endl;

    // Now if pi is assigned new value then it will show error
    
    int b =3, c=78, d=1234;\

    cout<<"With setw of 4"<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
    cout<<"The value of d is: "<<setw(4)<<d<<endl;
    cout<<endl;

    cout<<"Without setw"<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of d is: "<<d<<endl;
    cout<<endl;

    //OPERATOR PRECEDENCE

    int x= 3, y=5;
    int z= ((((x*5) +y) -45) +87);
    cout<<"The value of z is "<<z<<endl;
    cout<<endl;

    return 0;
}