#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("example.txt");

    if (myfile.is_open())
    {
        myfile << "This is a text.\n";
        myfile.close();
        cout << "File written succesfully." << endl;
    }
    else
    {
        cout << "Unable to open the file." << endl;
    }

    return 0;
}