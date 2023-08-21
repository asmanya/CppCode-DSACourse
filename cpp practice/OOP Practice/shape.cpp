#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

class Shape
{
public:
    virtual double calcArea()
    {
        cout << "Calculating area." << endl;
    }
    virtual double calcPerimeter()
    {
        cout << "Calculating perimeter." << endl;
    }
};

class Circle : public Shape
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

    double calcPerimeter()
    {
        return 2 * PI * radius;
    }
};

class Rectangle : public Shape
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

class Triangle : public Shape
{
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    double calcArea()
    {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calcPerimeter()
    {
        return side1 + side2 + side3;
    }
};

int main()
{
    double r, l, w, s1, s2, s3;

    cout << "For circle" << endl;
    cout << "Enter the radius." << endl;
    cin >> r;

    cout << "For rectangle" << endl;
    cout << "Enter length." << endl;
    cin >> l;
    cout << "Enter width." << endl;
    cin >> w;

    cout << "For triangle" << endl;
    cout << "Enter first side." << endl;
    cin >> s1;
    cout << "Enter second side." << endl;
    cin >> s2;
    cout << "Enter third side." << endl;
    cin >> s3;

    Circle circle(r);
    Rectangle rectangle(l, w);
    Triangle triangle(s1, s2, s3);

    cout << "Circle:" << endl;
    cout << "Area = " << circle.calcArea() << endl;
    cout << "Perimeter = " << circle.calcPerimeter() << endl;

    cout << "Rectangle:" << endl;
    cout << "Area = " << rectangle.calcArea() << endl;
    cout << "Perimeter = " << rectangle.calcPerimeter() << endl;

    cout << "Triangle:" << endl;
    cout << "Area = " << triangle.calcArea() << endl;
    cout << "Perimeter = " << triangle.calcPerimeter() << endl;

    return 0;
}