#include<iostream>
using namespace std;

int main()
{
    int totalPushUps = 0;
int pushUps;
do {
   int setPushUps;
   cout << "How many push-ups can you do in one set? ";
   cin >> setPushUps;
   totalPushUps += setPushUps;
   cout << "Do you want to do more push-ups? (1 for yes, 0 for no) ";
   cin >> pushUps;
} while (pushUps != 0);
cout << "Your total push-ups: " << totalPushUps << endl;
    return 0;
}