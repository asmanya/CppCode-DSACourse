#include <iostream>
using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}


int main()
{
    int result = add(5, 10);
    cout << "The sum is equal to " << result << endl;

    int x = 1;
    void print_x(){
            cout << x << endl;
        }
    print_x();
    return 0;
}