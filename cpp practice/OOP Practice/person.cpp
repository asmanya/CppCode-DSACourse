#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    string setName()
    {
        cin >> name;
    }
    string setAge()
    {
        cin >> age;
    }
    string setCountry()
    {
        cin >> country;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getCountry()
    {
        return country;
    }
};

int main()
{
    Person P1;

    // Getting info
    cout << "Enter the person name." << endl;
    P1.setName();
    cout << "Enter the age." << endl;
    P1.setAge();
    cout << "Enter the country" << endl;
    P1.setCountry();

    // Printing info
    cout << "The person name is " << P1.getName() << " and age is " << P1.getAge() << " and country is " << P1.getCountry() << "." << endl;

    return 0;
}