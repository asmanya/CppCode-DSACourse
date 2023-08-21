#include<iostream>
using namespace std;

float toCel(float fah);

int main()
{
    int temp;
    cout << "Enter value of temp in fahrenheit" << endl;
    cin >> temp;

    toCel(temp);
    return 0;
}

float toCel(float fah){
    float cel = (fah -32)* 5/9;
    cout << "Temp in cel is " << cel << endl;
}