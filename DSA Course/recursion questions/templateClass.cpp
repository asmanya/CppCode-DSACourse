#include <iostream>
using namespace std;

template <class T>
class Arithmatic
{
private:
    T a;
    T b;

public:
    Arithmatic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmatic<T>::Arithmatic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmatic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithmatic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmatic<int> ar1(10, 5);
    Arithmatic<float> ar2(10.45, 5.65);

    cout << "Add1: " << ar1.add() << endl;
    cout << "Sub1: " << ar1.sub() << endl;

    cout << "Add2: " << ar2.add() << endl;
    cout << "Sub2: " << ar2.sub() << endl;

    return 0;
}