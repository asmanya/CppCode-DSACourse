#include <iostream>
using namespace std;

class Car
{
public:
    string make;
    string model;
    int year;

    // constructors with parameter
    Car(string make, string model, int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
    }

    // default constructors
    ~Car()
    {
        cout << "Destroying " << make << " " << model << endl;
    }
};

int main()
{
    //creating objects using constructor with parameters
    Car myCar("Toyota", "Corolla", 2022 );
    Car yourCar("Ford", "Mustang", 2021);

    //creating object using default constructor
    Car unknownCar();

    return 0;
}