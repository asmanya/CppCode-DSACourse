#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i <=2; i++){
        cout << "Outer: " << i << "\n";

        for (int j = 1; j <= 3; j++){
            cout << "Inner: " << j << endl;

            for(int k = 1; k <= 4; k++){
                cout << "In-in: " << k << endl;
            }
        }
    }
    return 0;
}