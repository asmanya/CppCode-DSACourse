#include <iostream>
using namespace std;

class Triangle
{
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double a, double b, double c)
    {
        side1 = a;
        side2 = b;
        side3 = c;
    }
    void determineType()
    {
        if (side1 == side2 && side2 == side3)
        {
            cout << "Equilateral triangle." << endl;
        }
        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            cout << "Isosceles triangle." << endl;
        }
        else
        {
            cout << "Scalene triangle." << endl;
        }
    }
};

int main()
{
    double s1, s2, s3;
    cout << "Enter the first side of the triangle." << endl;
    cin >> s1;
    cout << "Enter the second side of the triangle." << endl;
    cin >> s2;
    cout << "Enter the third side of the triangle." << endl;
    cin >> s3;

    Triangle triangle(s1, s2, s3);
    triangle.determineType();

    return 0;
}