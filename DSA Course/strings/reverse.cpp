#include<iostream>
using namespace std;

int main()
{
    char A[] = "asmanya";
    char B[8];

    // USING TWO ARRAYS
    int i, j;
    for(i = 0; A[i] != '\0'; i++){}
    
    i = i - 1;
    for(j = 0; i >= 0; i--, j++){
        B[j] = A[i];
    }
    B[j] = '\0';

    cout << B << endl;

    // USING SINGLE ARRAY
    for(i = 0; A[i] != '\0'; i++){}
    i = i - 1;

    for(int j = 0; i > j; j++, i--){
        char temp;
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    cout << A;

    return 0;
}