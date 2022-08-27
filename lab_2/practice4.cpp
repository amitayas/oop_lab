#include<bits/stdc++.h>

bool isPalindrome(int n){
  int cp = n;
  int rev = 0 ;
  while(cp>0){
    rev = 10*rev + cp%10;
    cp=cp/10;
  };
  if(rev == n){
    return true;
  }
  return false;
}

int main(){
  int n;
  std::cout << "Enter number: ";
  std::cin >> n;

  std::cout << n << " is " << (isPalindrome(n)?"":"not ") << "a palindrome";

}
