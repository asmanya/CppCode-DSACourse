#include<iostream>
using namespace std;

int main()
{
    int subs, marks[10], total = 0;
    float per;
    cout << "Enter the number of subjects." << endl;
    cin >> subs;

    cout << "Enter number of subjects." << endl;
    for(int i = 1; i <= subs; i++){
        cout << "Enter marks of " << i << " subject" << endl;
        cin >> marks[i-1];
    }

    for(int j = 0; j < subs; j++){
        total = total + marks[j];
    }

    per = total/ subs;
    cout << "The percentage is " << per << endl;

    if(per > 85){
        cout << "Your grade is A" << endl;
    }else if(85 >= per && per > 75){
        cout << "Your grade is B" << endl;
    }else if(75 >= per && per > 50){
        cout << "Your grade is C" << endl;
    }else if(50 >= per && per > 30){
        cout << "Your grade is D" << endl;
    }else{
        cout<< "You are failed." << endl;
    }

    return 0;
}