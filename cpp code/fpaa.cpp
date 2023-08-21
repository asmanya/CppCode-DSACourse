#include <iostream>
using namespace std;

// Function prototype
void makePizza(string toppings, string size){
    cout << "You have ordered " << size << " pizza with " << toppings << " toppings." << endl;
}

    int main()
{
    makePizza("pepperoni", "medium");
    makePizza("mushroom, onions, green peppers", "large");
    return 0;
}
