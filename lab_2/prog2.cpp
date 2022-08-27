#include<iostream>

class Student {
  
  std::string name;
  int roll;
  float marks;
  
  public:
  //constructor
  Student(std::string name, int roll, float marks){
    this->name = name;
    this->roll = roll;
    this->marks = marks;
  }

  void display(){
    std::cout << "Student details:- " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "ROll: " << roll << std::endl;
    std::cout << "Total marks: " << marks << std::endl;
  }
};

int main(){
  std::string name;
  int roll;
  float marks;

  std::cout << "Student name: ";
  std::cin >> name;
  std::cout << "Roll number: ";
  std::cin >> roll;
  std::cout << "Total marks: ";
  std::cin >> marks;

  Student student = Student(name, roll, marks);
  student.display();
}
