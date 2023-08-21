#include<iostream>
#include<string>

using namespace std;

class Hotel {
    private:
        int roomNumber;
        string guestName;
        string employeeName;
    public:
        void bookRoom(int roomNum, string guest){
            roomNumber = roomNum;
            guestName = guest;
            cout << "Room " << roomNumber << " has been booked by " << guestName << endl;
        }

        void setEmployeeName(string name){
            employeeName = name;
        }
        
        void printEmployeeName(){
            cout << "Employee name: " << employeeName << endl;
        }
};

int main()
{
    Hotel h1;
    h1.bookRoom(101, "John");
    h1.setEmployeeName("Bob");
    h1.printEmployeeName();

    return 0;
}