#include <iostream>
#include <string>
using namespace std; 

class Animal
{
    public:
        string name,sound;
        int speed;
        void set_animal_data(string param_name,string param_sound,int param_speed);
        void get_animal_data();
};
void Animal :: set_animal_data(string param_name,string param_sound,int param_speed){
    name = param_name;
    sound = param_sound;
    speed = param_speed;
}
void Animal :: get_animal_data(){
    cout<<"Name : "<<name<<"\nSound : "<<sound<<"\nSpeed : "<<speed<<endl;
}

int main(){
    Animal Human;
    Human.set_animal_data("homosapien","Language",20); // Speed is in km/h
    Human.get_animal_data();
    return 0;
}