#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char choice;
    int a, b, res;
    cout << "Enter first value:" << endl;
    cin >> a;
    cout << "Enter operator:" << endl;
    choice = getch();
    cout << choice;
    cout << "\nEnter the second value:" << endl;
    cin >> b;

    switch (choice)
    {
    case '+':
        res = a + b;
        cout << "Sum is " << res;
        break;

    case '-':
        res = a - b;
        cout << "difference is " << res;
        break;
    case '*':
        res = a * b;
        cout << "Product is " << res;
        break;
    case '/':
        res = a / b;
        cout << "division is " << res;
        break;
    
    default:
        cout << "Enter valid operator.";
        break;
    }

    return 0;
}