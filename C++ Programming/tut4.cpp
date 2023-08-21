#include <iostream>

using namespace std;
int glo = 6;

void sum()
{
    int a;
    cout<< glo;
}

int main()
{
    int glo = 9;
    int a = 4, b = 5;
    float pi = 3.14;
    char c = 'u';
    bool is_true = true;
    sum();
    cout<< glo << is_true;
     cout<<"\nThis is tutorial 4.\nThe value of a is "<<a
         <<".\nThe value of b is " <<b
         <<".\nThe value of pi is " <<pi
         <<".\nThe value of c is " <<c;
    return 0;
}