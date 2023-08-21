#include <iostream>
using namespace std;

class Date
{
private:
    int date;
    int month;
    int year;

public:
    int setDate()
    {
        cout << "Enter the date." << endl;
        cin >> date;
    }
    int setMonth()
    {
        cout << "Enter the month." << endl;
        cin >> month;
    }
    int setYear()
    {
        cout << "Enter the year." << endl;
        cin >> year;
    }
    void getDate()
    {
        cout << date;
    }
    void getMonth()
    {
        cout << month;
    }
    void getYear()
    {
        cout << year;
    }
};

int main()
{
    int d, m, y;
    Date date;

    d = date.setDate();
    m = date.setMonth();
    y = date.setYear();

    if ((m > 12) && ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)))
    {
        d = 31;
    }
    else if (y % 4 == 0)
    {
        if (m == 2)
        {
            d = 29;
        }
    }
    else if (m == 2)
    {
        d = 28;
    }
    else if ((m > 12) && ((m == 4) || (m == 6) || (m == 9) || (m == 11)))
    {
        d = 30;
    }
    else
    {
        cout << "invalid date.";
    }

    return 0;
}