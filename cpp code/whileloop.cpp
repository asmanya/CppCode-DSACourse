#include<iostream>
using namespace std;

int main()
{
    int totalPushUps = 0;
    int pushUps;
    cout << "How many push-ups do you want to do?" << endl;
    cin >> pushUps;

    while (pushUps > 0){
        int setPushUps;
        cout << "How many push-Ups can you do in one set? " << endl;
        cin >> setPushUps;
        totalPushUps += setPushUps;
        pushUps -= setPushUps;
    }
    cout << "Your total Push-Ups are " << totalPushUps << endl;
    return 0;
}