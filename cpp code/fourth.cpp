#include <iostream>
using namespace std;

int main(){
    bool a, b;
    a = true;
    b = false;

    bool result;
    result = a && b;
    cout << result << endl;

    result = a || b;
    cout << result << endl;

    result = !a;
    cout << result << endl;

    bool c = true;
    int x = 0;
    x = {c || (x=42)};
    cout<< x << endl;

    return 0;
}