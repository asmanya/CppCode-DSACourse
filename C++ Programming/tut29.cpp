#include<iostream>
using namespace std;

class Complex{
    int a, b;
    //creating a constructor
    public:
    /*Constructor is a special member function with the same 
    name as of the class.It is automatically invoked whenever
    an object is created.It is used to initialize the objects
    of its class*/

    Complex(void); //constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(void){
    a= 10;
    b= 0;
//This is adefault constructor as it acccepts no parameters.
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

//Characteristics of constructor

/*
1. It should be declared in public section of the class.
2. They are automaticaly invoked whenever the object is created.
3. They cannot  return values and do not have return types4.
4. It can have default arguments.
5. We can not refer to their address.
*/
