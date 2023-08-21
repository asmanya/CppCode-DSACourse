#include <iostream>
#include <string>
using namespace std;

// OOPs- Classes and Objects.
// Classes is extension of structures.

/*You can declare objects along with the class declaration like this;
    Class Employee{
        class definition
    } harry, rohan, lovish; */

// Nesting of member functions
class binary
{
    //string is private member without memntioning,
    //every member of class in privae unless mentioned.
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format." << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying ones complement of binary number."<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.ones_complement();
    b.display();

    return 0;
}