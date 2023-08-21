#include<iostream>
using namespace std;

int main()
{
    int time;
    cout << "Enter a time between 0 and 24." << endl;
    cin >> time;
    string result = (time > 18) ? "Yes." : "No.";
    cout << result;

    switch(time){
        case 10:
            cout << "Time is 10."<< endl;
        break;

        default:
            cout << "The time is different than 10." <<endl;
            break;
    }
    return 0;
}