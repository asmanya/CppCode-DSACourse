#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    string employeeID;
    int salary;

public:
    Employee(string n, string id, int s)
    {
        name = n;
        employeeID = id;
        salary = s;
    }
    
    double setSalary(double k)
    {
        if (k > 0 && k < 1.4)
        {
            salary *= k;
            return salary;
        }
        else
        {
            cout << "Invalid performance rating.";
            return 0.0;
        }
    }
};

int main()
{
    string name, employeeID;
    int salary;
    double perRating, totalSalary;

    cout << "Enter the name of the employee." << endl;
    cin >> name;
    cout << "Enter the id of the employee." << endl;
    cin >> employeeID;
    cout << "Enter the salary of the employee." << endl;
    cin >> salary;

    Employee employee(name, employeeID, salary);

    cout << "Enter the performance rating of the employee." << endl;
    cin >> perRating;

    totalSalary = employee.setSalary(perRating);
    cout << "The total salary of the person is " << totalSalary << endl;

    return 0;
}