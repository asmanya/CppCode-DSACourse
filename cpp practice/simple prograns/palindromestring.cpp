#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string text){
    for( int i = 0; i < text.length()/ 2 ; i ++){
        if(text[i] != text[text.length() - i - 1]){ 
            return false;
        } 
    return true;
    }
}

int main()
{
    string test1;
    cout << "Enter your string." << endl;
    cin >> test1;

    if(isPalindrome(test1)){
        cout << "Test1 is a palindrome." << endl;
    }else {
        cout << "Test1 is not a palindrome." << endl;
    }
    
    return 0;
}