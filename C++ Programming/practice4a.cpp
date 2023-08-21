#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void Display()
    {
        cout << "The coordinates of the point is (" << x << " ," << y << ")" << endl;
    }
    friend double distance(Point p1, Point p2);
};

double distance(Point p1, Point p2)
{
    int re = pow(p1.x - p2.x, 2) + (p1.y - p2.y, 2);
    int res = sqrt(re);
    cout << "The distance is " << res << endl;
    return res;
}

int main()
{
    Point p(5, 1);
    p.Display();

    Point q(4, 2);
    q.Display();

    distance(p, q);

    return 0;
}