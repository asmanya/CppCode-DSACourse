#include <iostream>
using namespace std;

// There are two types of header files
// 1. System header files: comes with compiler
// 2. User definer header files: Written by programmer

int main()
{
    int a=4 , b=5;
    cout<<"Operators in C++:" <<endl;
    cout<<"Following are the types of operators in C++" <<endl;
    cout<<endl;
    
//Arithmatic operators: 
    cout<<"The value of a+b is "<< a+b <<endl;
    cout<<"The value of a-b is "<< a-b <<endl;
    cout<<"The value of a*b is "<< a*b <<endl;
    cout<<"The value of a/b is "<< a/b <<endl;
    cout<<"The value of a%b is "<< a%b <<endl;
    cout<<"The value of a++ is "<< a++ <<endl;
    cout<<"The value of a-- is "<< a-- <<endl;
    cout<<"The value of ++a is "<< ++a <<endl;
    cout<<"The value of --a is "<< --a <<endl;
    cout<<endl;

//Assignment operators: used to assign values to variables
    // int a =3, b=9;
    // char d= 'd';

//Comparison operator:
    cout<<"The following are the comparison operators." <<endl;
    cout<< "The value of a==b is " << (a==b)<<endl;
    cout<< "The value of a!=b is " << (a!=b)<<endl;
    cout<< "The value of a>=b is " << (a>=b)<<endl;
    cout<< "The value of a<=b is " << (a<=b)<<endl;
    cout<< "The value of a==b is " << (a==b)<<endl;
    cout<< "The value of a>b is " << (a>b)<<endl;
    cout<< "The value of a<b is " << (a<b)<<endl;
    cout<<endl;

//Logical operators
    cout<<"The following are the logical operators"<<endl;
    cout<<"The value of a ==b && a<b logical 'and' operator is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of a ==b || a<b logical 'or' operator is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of (!(a == b)) logical 'not' operator is "<<(!(a == b))<<endl;
    cout<<endl;

    return 0;
} 