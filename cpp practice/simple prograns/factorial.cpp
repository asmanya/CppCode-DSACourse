#include<iostream>
using namespace std;

int fact(int a){
    if( a == 0){
        return 1;
    }else if(a < 0){
        cout << "factorials are not defined for neg numbers" << endl;
    } else{
        (a* fact(a-1));
    }
}

int main()
{
    // FOR LOOP
    
    // int num, fact;
    // fact = 1;
    // cout << "Enter a number." << endl;
    // cin >> num;

    // if(num == 0 || num == 1){
    //     cout << "Factorial of " << num << " is 1." << endl;
    // }

    // for( int i = 1; i <= num; i++){
    //         fact = fact * i;
    // }

    // cout << "The factorial of " << num << " is " << fact << endl;

    // DO WHILE LOOP
    
    // int num;
    // int i = 1;
    // int fact = 1;

    // cout << "Enter a number." << endl;
    // cin >> num;

    // if (num > 1) {
    //     do {
    //         fact = fact * i;
    //         i++;
    //     } while (i <= num);
    // } else if (num == 0 || num == 1) {
    //     cout << "The factorial is 1.";
    // }

    // cout << "The factorial is " << fact << endl;

    // RECURSIVE METHOD
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    if(n>=0){
        cout << "The factorial is " << fact(n) << endl;
    }else {
        cout << "The factorials are not defined for neg numbers";
    }

    return 0;
}
