#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double PI = 3.14;

class Circle
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    double calcArea()
    {
        return PI * pow(radius, 2);
    }
    double calcCircum()
    {
        return 2 * PI * radius;
    }
};

int main()
{
    double rad;
    cout << "Enter the value of radius." << endl;
    cin >> rad;
    
    Circle c1(rad);
    double area = c1.calcArea();
    double circumference = c1.calcCircum();

    cout << "The area is " << area << endl;
    cout << "The circumference is " << circumference << endl;

    return 0;
}