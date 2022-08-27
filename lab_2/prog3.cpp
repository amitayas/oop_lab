#include<iostream>

class Student {
  
  std::string name;
  int roll;
  float *marks;
  
  public:
  //constructor
  Student(std::string name, int roll, float marks[5]){
    this->name = name;
    this->roll = roll;
    this->marks = marks;
  }

  void display(){
    std::cout << "Student details:- " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "ROll: " << roll << std::endl;
    
    std::cout << "Total marks: " << (marks[0]+marks[1]+marks[2]+marks[3]+marks[4]) << std::endl;
    std::cout << "Percentage: " << (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5 << std::endl;
  }
};

int main(){
  std::string name;
  int roll;
  float marks[5];

  std::cout << "Student name: ";
  std::cin >> name;
  std::cout << "Roll number: ";
  std::cin >> roll;
  std::cout << "Marks: ";
  
  for(int i = 0 ; i < 5 ; i++){
    
    std::cin >> marks[i];
  }

  Student student = Student(name, roll, marks);
  student.display();
}
