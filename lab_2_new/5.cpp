#include<bits/stdc++.h>


int sum(int a, int b = 10, int c = 20){
  return (a+b+c);
}

int main() {
  int a = 3, b = 4, c = 5;
  std::cout
    << "return value with all three arguements: "
    << sum(a,b,c)
    << std::endl
    << "return value with two arguements: "
    << sum(a,b)
    << std::endl
    << "retun value with only one arguement: "
    << sum(a)
    <<std::endl;
}
