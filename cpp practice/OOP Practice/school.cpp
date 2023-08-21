#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    string name;
    int id;
    double gpa;
  public: 
    void setName(){
      cout << "Enter the name of the student." << endl;
      cin >> name;
    }
    void setID(){
      cout<< "Enter the id of the student." << endl;
      cin >> id;
    }
    void setGPA(){
      cout << "Enter the GPA of the student." << endl;
      cin >> gpa;
      if(0 > gpa && gpa < 4){
        cout << "Enter valid GPA." << endl;
        setGPA();
      }
    }
    void getName(){
      cout << "The name is " << name << endl;
    }
    void getID(){
      cout << "The id is " << id << endl;
    }
    void getGPA(){
      cout << "The gpa is " << gpa << endl;
    }
};

int main(){
  cout << "welcome to the student information system!" << endl;
  Student std1;
  std1.setName();
  std1.setID();
  std1.setGPA();
  std1.getName();
  std1.getID();
  std1.getGPA();
  
  return 0;
}