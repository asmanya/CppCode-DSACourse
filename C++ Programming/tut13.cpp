#include<iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};

    cout<<"These are marks\n";
    cout<<marks[0]<<endl<<marks[1]<<endl<<marks[2]
    <<endl<<marks[3]<<endl;

    marks[2] = 455;
    cout<<"The new value of marks[2] is "<<marks[2]<<endl;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
    int* p = marks;
    cout<<"The value of *p is "<<(*p)<<endl;
    cout<<"The value of *p+1 is "<<(*p+1)<<endl;
    cout<<"The value of *p+2 is "<<(*p+2)<<endl;
    cout<<"The value of *p+3 is "<<(*p+3)<<endl;

    return 0;
}