#include<iostream>
using namespace std;

int main()
{
    int rideSpeed = 65;
    int speedLimit = 50;

    if( rideSpeed <= speedLimit){
        cout << "You can go on this ride." << endl;
    } else {
        cout << "This ride is too slow for you." << endl;
    }

    switch (rideSpeed){
    case 50:
        cout << "This ride is slow." << endl;
        break;

    case 65:
        cout << "This is a medium ride speed." << endl;
        break;

    case 80:
        cout << "This ride is fast" << endl;
        break;
    
    default:
        cout << "This ride is an unknown speed." <<endl;
    }

    return 0;
}