#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    double calcArea()
    {
        return length * width;
    }
    double calcPerimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    double l, w;
    cout << "Enter the length of the rectangle." << endl;
    cin >> l;
    cout << "Enter the width of the rectangle." << endl;
    cin >> w;

    Rectangle rec(l, w);
    double area = rec.calcArea();
    double perimeter = rec.calcPerimeter();

    cout << "The area of the rectangle is " << area << endl;
    cout << "The perimeter of the rectangle is " << perimeter << endl;
    
    return 0;
}