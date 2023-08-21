#include<iostream>
using namespace std;

int main()
{
    int x, y, area, peri;
    cout << "Enter the length of rectangle." << endl;
    cin >> x;
    cout << "Enter the breadth of rectangle." << endl;
    cin >> y;

    area = x * y;
    peri = 2 * (x + y);

    cout << "The area of rectangle is " << area << " and the perimeter is " << peri << endl;

    return 0;
}