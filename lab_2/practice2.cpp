#include<bits/stdc++.h>

int factorial(int n){
  if(n == 0 || n==1){
    return 1;
  }
  return n * factorial(n-1);
}

int main(){
  int n;
  std::cout << "Enter number: ";
  std::cin >> n;

  std::cout << "factorial of " << n << " is " << factorial(n) <<std::endl;
}
