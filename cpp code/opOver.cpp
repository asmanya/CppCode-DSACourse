#include <iostream>
#include <string>

using namespace std;

class Vector
{
private:
    int x, y, z;

public:
    Vector(int xCoord, int yCoord, int zCoord)
    {
        x = xCoord;
        y = yCoord;
        z = zCoord;
    }
    Vector operator+(const Vector &other) const
    {
        Vector result(x + other.x, y + other.y, z + other.z);
        return result;
    }
};

int main()
{
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);
    Vector v3 = v1 + v2; // v3 = v1.add(v2)

    return 0;
}