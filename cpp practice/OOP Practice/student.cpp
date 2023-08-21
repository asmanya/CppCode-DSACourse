#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string class_number;
    string roll_number;
    double marks;

public:
    Student()
    {
        name = "XYZ";
        class_number = "XYZ";
        roll_number = "000";
        marks = 0;
    }

    Student(string n, string cn, string rn, double m)
    {
        name = n;
        class_number = cn;
        roll_number = rn;
        marks = m;
    }

    double grade(int subs, double marks)
    {
        double grade;
        grade = marks / subs;
        return grade;
    }
};

int main()
{
    string n, cn, rn;
    double m;
    int subs;

    cout << "Enter the student info." << endl;
    cout << "Enter name." << endl;;
    cin >> n;
    cout << "Enter class number." << endl;
    cin >> cn;
    cout << "Enter roll number." << endl;
    cin >> rn;
    cout << "Enter the marks" << endl;
    cin >> m;

    Student std1(n, cn, rn, m);
    cout << "Enter the number of subjects." << endl;
    cin >> subs;

    double grade = std1.grade(subs, m);
    cout << "The grade is " << grade;

    return 0;
}