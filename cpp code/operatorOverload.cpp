#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int r; int i)
    {
        real = r;
        imag = i;
    }

    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    /* 
    returnType operator+(const ClassName& other) const{
        //implement the code here:
    }
    */
   
};

int main()
{
    Complex c1(5, 4);
    Complex c2(2, 3);
    Complex c3;
    c3 = c1 + c2; // c3 = c1.add(c2);

    return 0;
}