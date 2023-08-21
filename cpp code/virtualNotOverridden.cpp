#include<iostream>
using namespace std;

class Animal {
    public:
        virtual void makeSound(){
            cout << "Animal is making a sound...\n";
        }
};

class Dog : public Animal {
    public:
        // No implementation for makeSound() for Dog class
};

int main()
{
    Animal* animal;

    Dog dog;
    animal = &dog;

    animal->makeSound(); 

    return 0;
}