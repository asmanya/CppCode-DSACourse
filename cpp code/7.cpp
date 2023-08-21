#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Insert the first integer." << endl;
    cin >> a;
    cout << "Insert the Second integer." << endl;
    cin >> b;

    if (a > 0 && b > 0){
        cout << "Its sum is " << a + b << " and product is " << a * b <<  endl;
    }

    if (a < 0 && b < 0){
        cout << "Its difference is " << a - b << " and quotient is " << a / b << endl;
    }

    if ((a > 0 && b < 0) || (a < 0 && b > 0)){
        cout << "Its product is " << a * b << " and quotient is " << a / b << endl;
    }

    if(a == 0 || b == 0){
        cout << "The division is undefined.";
    }
    
    return 0;
}
