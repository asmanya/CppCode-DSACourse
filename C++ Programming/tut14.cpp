#include<iostream>
using namespace std;

//User defined datatype
typedef struct employee
{
    int eId;
    char favchar;
    float salary;
}ep;

//typedef and ep is written so as to not write full code again and again

union money
{
    int rice;
    char car;
    float pounds;
};

//One of these can be used at a time.
//it is used for better memory management.


int main()
{
    enum meal{ breakfast, lunch, dinner};
    
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    struct employee harry;
    union money m1;
    ep shubham;
    ep rohan;

    m1.car = 'e';
    harry.eId = 1;
    harry.favchar = 'c';
    harry.salary = 12000000;

    cout<<m1.car<<endl;
    cout<<"The eId of harry is "<<harry.eId<<endl;
    cout<<"The favchar of harry is "<<harry.favchar<<endl;
    cout<<"The salary of harry is "<<harry.salary<<endl;

    return 0;
}