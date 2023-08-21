#include <iostream>
using namespace std;

int main() {
  // Part 1: For Loop
  int n = 5; // Initialize n to a value of your choice

  for (int i = 1; i <= n; i++) {
    cout << i << endl;
  }

  // Part 2: While Loop
  int sum = 0; // Initialize sum to 0

  int num = 1;
  
  while (num <= 10) {
    sum += num;
    num++;
  }
  
  cout << "Sum: " << sum << endl;

  // Part 3: Do-While Loop
   int x = 5; // Initialize x to a value of your choice
   
   int userInput;
   
   do {
     cout << "Enter a number: ";
     cin >> userInput;
     
     if (userInput >= x) {
       cout << "Value entered by the user: " << userInput << endl;
     }
   } while (userInput < x);

   return 0;
}