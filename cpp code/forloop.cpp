#include<iostream>
using namespace std;

int main()
{
    int totalPushUps = 0;
    int pushUps;
    for (int i = 0; i < 3; i++){
        cout << "How many pushups can you do in a minute?" << endl;
        cin >> pushUps;
        totalPushUps += pushUps;
    }
    cout << "Your total push-ups in one minute: " << totalPushUps << endl;

    return 0;
}