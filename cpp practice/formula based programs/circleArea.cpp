#include<iostream>
using namespace std;

int main()
{
    int radius;
    float area;
    cout << "Enter the radius of the circle." << endl;
    cin >> radius;

    area = 3.14 * radius * radius;
    cout << "The area of the circle is " << area << endl;
    return 0;
}