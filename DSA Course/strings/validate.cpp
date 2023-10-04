#include<iostream>
using namespace std;

int validate(char *name){
    for(int i = 0; name[i] != '\0'; i++){
        if(!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57)){
            return 0;
        }
    }
    return 1;
}

int main()
{
    char name[20];
    cout << "Enter a password without special characters." << endl;
    cin >> name;

    if(validate(name)){
        cout << "The string is valid." << endl;
    }
    else{
        cout << "Invalid string." << endl;
    }

    return 0;
}