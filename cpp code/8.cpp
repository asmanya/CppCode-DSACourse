#include <iostream>
using namespace std;

int main(){
  cout << "Enter a number between 1 and 5." << endl ;
  int choice;
  cin >> choice;

  switch (choice){
    case 1:
      cout << "You chose option 1";
      break;

    case 2:
      cout << "You chose option 2";
      break;

    case 3:
      cout << "You chose option 3";
      break;

    case 4:
      cout << "You chose option 4";
      break;

    case 5:
      cout << "You chose option 5";
      break;

    default:
      cout<< "Invalid choice";
    break;
  }

  return 0;
}