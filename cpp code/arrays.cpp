#include<iostream>
#include<string>
using namespace std;

int main()
{
    string car[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++){
        cout << i << " = " << car[i] << endl;
    }

    int myNumbers[5]= {10, 20, 30, 40, 50};
    for (int i = 0 ; i < 5; i++){
        cout << myNumbers[i] << endl;
    }

    string names[3] = {"name1", "name2", "name3"};
    for (string i : names){
        cout << i << endl;
    }
    cout << sizeof(car) / sizeof(string) << endl;
    cout << sizeof(myNumbers) / sizeof(int) << endl;
    cout << sizeof(names) / sizeof(string) << endl;

    // Multidimensional Array
    string arr2d[2][4] = {
        { "A", "B", "C", "D"},
        { "E","F","G","H"}
    };

    string arr3d[2][2][2] = {
        {
            { "A", "B"},
            { "C", "D"}
        },
        {
            { "E", "F"},
            { "G", "H"}
        }
    };

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << arr2d[i][j] << endl;
        }
    }

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; j++){
                cout << arr3d[i][j][k] << endl;
            }
        }
    }

    return 0;
}