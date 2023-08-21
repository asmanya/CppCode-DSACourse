#include <iostream>
#include <string>

using namespace std;

class Vector
{
public:
    Vector operator+(const Vector &other) const
    {
        Vector result(x + other.x, y + other.y, z + other.z);
        return result;
    }

private:
    double x, y, z;
};

int main()
{

    return 0;
}