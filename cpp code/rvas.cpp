#include<iostream>
using namespace std;

int calculateArea( int length, int width){
    int area = length * width;
    return area;
}

int main()
{
    int rectangleArea = calculateArea(5, 10);
    cout << "The area of the rectangle is: " << rectangleArea << endl;
    return 0;
}