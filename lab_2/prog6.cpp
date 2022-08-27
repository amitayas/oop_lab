#include<bits/stdc++.h>

class Employee{
  int id;
  std::string name;
  int age;
  float basicSalary;
  float DA;
  float HRA;
  float grossSalary;
  
  public:
  //constrictor
  Employee(int _id, std::string _name, int _age, float _basicSalary){
    id = _id;
    name = _name;
    age = _age;
    basicSalary = _basicSalary;
    DA = 0.8 * _basicSalary;
    HRA = 0.1 * _basicSalary;
    grossSalary = _basicSalary + DA + HRA;
  };
  Employee(){};

  void display(){
    std::cout << std::endl <<  this->id << '\t';
    std::cout <<  this->name << '\t';
    std::cout <<  this->age << '\t';
    std::cout <<  this->basicSalary << '\t';
    std::cout <<  this->DA << '\t';
    std::cout <<  this->HRA << '\t';
    std::cout <<  this->grossSalary << std::endl;

  }
};

int main(){
  int n;
  std::cout << "Enter no of employees: ";
  std::cin >> n;
  
  //vector for storing n employees
  std::vector<Employee*> employees;
  //Employee newEmployee;

  int id;
  int age;
  std::string name;
  float basicSalary;

  for(int i = 0 ; i < n ; i++){
    std::cout << "Enter id: ";
    std::cin >> id;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter basic salary: ";
    std::cin >> basicSalary;

    Employee* newEmployee = new Employee(id, name, age, basicSalary);

    //Adding employee to the vector
    employees.push_back(newEmployee);
  };

  std::cout << "id\t" << "Name\t" << "Age\t" << "Salary\t" << "DA\t" << "HRA\t" << "Gross Salary" << std::endl; 

  for(int i = 0 ; i < n ; i++){
    employees[i]->display();
  }
}
