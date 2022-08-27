#include<bits/stdc++.h>


int my_var = 5;

int main() {
  int my_var = 6;
  std::cout << "this is a fuunc demonstration of the :: operator:- " << std::endl;
  std::cout
    << "value of local variable my_var: " << my_var << std::endl
    << "value of global variable my_var: " << ::my_var << std::endl;
}
