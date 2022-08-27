#include<iostream>

class Message {
  std::string greeting;
  std::string name;

  public:
  //constructor
  Message(std::string name = "somebody", std::string greeting = "hello"){
    this->greeting = greeting;
    this->name = name;
  }

  void greet(){
    std::cout << greeting << " " << name  << std::endl;
  }
};

int main(){
  std::string name;
  std::cout << "Enter your name: " ;
  std::cin >> name;

  Message(name).greet();
}
