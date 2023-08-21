#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName << endl;
    cout << "The length of the full name is: " << fullName.length() << endl;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Total characters are: " << txt.size() << endl;
    cout << txt[8] << endl;
    txt[8] = '9';
    cout << txt[8] << endl;
    cout << "It\'s alright." << endl;

    string name;
    cout << "Enter your first name." << endl;
    cin >> name;
    cout << "Your name is " << name << "."<< endl;

    string nameFull;
    cout << "Enter your full name: ";
    getline (cin, nameFull);
    cout << "Your name is " << nameFull << "." << endl;

    // std::string greeting = "Hello";
    // std::cout << greeting;

    return 0;
}