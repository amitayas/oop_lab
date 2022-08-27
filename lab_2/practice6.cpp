#include<iostream>


int factorial(int n){
  if(n == 0 || n==1){
    return 1;
  }
  return n * factorial(n-1);
}


float sumOfSeries(int n){
  if(n==1){
    return 1.0;
  }
  return ((float)n/factorial(n))*(n%2==0?(-1):1) + sumOfSeries(n-1);
}

int main(){
  int n;
  std::cout << "Enter number of terms: ";
  std::cin >> n;
  std::cout << "sum of series: " << sumOfSeries(n) << std::endl;
}
