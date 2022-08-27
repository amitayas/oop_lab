#include<bits/stdc++.h>

class Complex{
  public:
  float real;
  float imaginary;

  //method to display the complex number
  void display(){ 
    std::cout << real 
      << ((imaginary!=0.0)?" + " : "") 
      << ((imaginary!=0.0)?imaginary:NULL) 
      << ((imaginary!=0.0)?" i " : "") 
      << std::endl; 
  }

  Complex(float real = 0.0, float imaginary = 0.0){
    this->real = real;
    this->imaginary = imaginary;
  }
};

int main(int argc, char **argv){
  Complex complex_numbers[10];
  float real, imaginary;
  for(int i = 0 ; i < 10 ; i++){
    std::cout << "enter the real part : ";
    std::cin >> real;
    std::cout << "enter the imaginary part : ";
    std::cin >> imaginary;
    
    complex_numbers[i] = Complex(real, imaginary);
  }

  std::cout << "Entered numbers:-\n " << std::endl;
  for(int i = 0 ; i < 10 ; i++){
    complex_numbers[i].display();
  }
}
