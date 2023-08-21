#include<iostream>
using namespace std;


//C++ is smart enough to separate function with same names for diff purpose
//its called function overloading.


int sum(int a, int b)
{
    cout<<"Using function with 2 arguments.\n";
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"Using functions with 3 arguments.\n";
    return a+b+c;
}

int volume(double r, int h)
{
    return(3.14*r*r*h);
}

int volume(int l,int b,int h)
{
    return ( l *b *h);
}

int volume(int a)
{
    return ( a *a *a);
}


int main()
{
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3,4 and 6 is "<<sum(3,4,6)<<endl;
    cout<<"The volume of cylinder is "<<volume(2,5)<<endl;
    cout<<"The volume of cuboid is "<<volume(2,5,6)<<endl;
    cout<<"The volume of cube is "<<volume(2)<<endl;
    return 0;
}