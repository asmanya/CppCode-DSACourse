#include<iostream>
using namespace std;

float toFeh(float cel);

int main()
{
    int cel;
    cout << "Enter the number." << endl;
    cin >> cel;

    toFeh(cel);
    
    return 0;
}

float toFeh(float cel){
    int far;
    far = cel * 9/5 + 32;
    cout << "Temp in far is " << far << endl;
}