#include<bits/stdc++.h>

int fibo(int n){
  if(n==1){
    return 0;
  }
  if(n==2){
    return 1;
  }
  return fibo(n-1) + fibo(n-2);
};

int main(){
  int n;
  std::cout << "Enter number of terms: ";
  std::cin >> n;
  for(int i = 0 ;  i< n ; i++){
    std::cout << fibo(i+1) << "\t";
  }
  std::cout << std::endl;
}
