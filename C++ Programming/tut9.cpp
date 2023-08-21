#include<iostream>

using namespace std;

int main()
{
    cout<<"This is tutorial 9"<<endl;
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    

    // SELECTTION CONTROL STRUCTURE: IF-ELSE LADDER.
     
    if ((age<18) && (age>1))
    {
        cout<<"You can not come to my party.";
    }
    else if (age==18)
    {
        cout<<"You are a kid and you will get a kid pass.";
    }
    else if (age<=1)
    {
        cout<<"You are not yet born";
    }
    else
    {
        cout<<"You can come to the party";
    }
    cout<<endl;


    //SELECTION CONTROL STRUCTURE: SWITCH CASE.

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 21:
        cout<<"You are 21"<<endl;
        break;
    default:
        cout<<"You are not 18 or 21"<<endl;
        break;
    }
    
    return 0;
}
