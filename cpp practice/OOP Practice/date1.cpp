#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 1;
        month = 1;
        year = 1000;
    }

    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    int getDay() const
    {
        return day;
    }

    int getMonth() const
    {
        return month;
    }

    int getYear() const
    {
        return year;
    }

    bool isValidDate() const
    {
        if (year < 1000 || year > 3000)
            return false;

        if (month < 1 || month > 12)
            return false;

        if (day < 1)
            return false;

        if (month == 2)
        {
            if (year % 4 == 0)
            {
                if (year % 100 != 0 || year % 400 == 0)
                {
                    if (day > 29)
                        return false;
                }
                else
                {
                    if (day > 28)
                        return false;
                }
            }
            else
            {
                if (day > 28)
                {
                    return false;
                }
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day > 30)
                return false;
        }
        else
        {
            if (day > 31)
                return false;
        }

        return true;
    }
};

int main()
{
    int d, m, y;
    Date date;

    cout << "Enter day, month, and year: ";
    cin >> d >> m >> y;

    date.setDate(d, m, y);

    if (date.isValidDate())
    {
        cout << "Date is valid." << endl;
        cout << "Day: " << date.getDay() << ", Month: " << date.getMonth() << ", Year: " << date.getYear() << endl;
    }
    else
    {
        cout << "Invalid date." << endl;
    }
    return 0;
}