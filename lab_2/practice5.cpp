#include<iostream>

void pattern(){
  for(int i = 'A' ; i <= 'Z'; i++ ){
    for(int j = 'A' ; j <= i ; j++){
      std::cout << (char)j << " ";
    }
    std::cout << std::endl;
  }
}


int main(){
  pattern();
}
