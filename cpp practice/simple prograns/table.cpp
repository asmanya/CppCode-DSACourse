#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number" <<endl;
    cin >> num;

    cout << "The table of " << num << " is" << endl;

    // FOR LOOP

    for(int i = 1; i <= 10; i++){
        cout << num << " times " << i << " equals " << (num * i) << endl;
    }

    // WHILE LOOP

    int a = 1;
    while(a <= 10){
        cout << num << " times " << a << " equals " << (num * a) << endl;
        a++;
    }

    return 0;
}