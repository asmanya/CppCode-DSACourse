#include<iostream>
#include<string>
using namespace std;

class Employee {
    private:
        string name;
        int age;
        float salary;
    public:
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        void setSalary(float s){
            salary = s;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        float getSalary(){
            return salary;
        }
};

int main()
{
    Employee emp1, emp2;
    emp1.setName("John");
    emp1.setAge(30);
    emp1.setSalary(50000);
    emp2.setName("Jane");
    emp2.setAge(25); 
    emp2.setSalary(40000);

    cout << emp1.getName() << " is " << emp1.getAge() << " years old and earns $ " << emp1.getSalary() << endl;
    
    cout << emp2.getName() << " is " << emp2.getAge() << " years old and earns $ " << emp2.getSalary() << endl;

    return 0;
}