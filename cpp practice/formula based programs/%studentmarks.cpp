#include<iostream>
using namespace std;

int main()
{
    int subs;
    float total = 0, marks[10];
    cout << "Enter the number of subjects." << endl;
    cin >> subs;

    cout << "Enter marks of " << subs << " subjects." << endl;
    for(int i = 1; i <= subs; i++){
        cout << "marks in " << i << " out of 100."<< endl;
        cin >> marks[i-1];
    }

    for(int j = 0; j < subs; j++){
        total = total + marks[j];
    }

    float percentage = total / subs;
    cout << "The percentage is " << percentage << endl;

    return 0;
}