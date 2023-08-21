#include<iostream>
using namespace std;

int globalVariable = 10;

void myFunction(){
    int localVariable = 5;
    cout << "Local variable value: " << localVariable << endl;
    cout << "Global variable value: " << globalVariable << endl;
}

void printMessage(){
    cout << "Hey there!";
}

int main()
{
    myFunction();
    cout<< "Global variable value: " << globalVariable << endl;
    printMessage();
    return 0;
}