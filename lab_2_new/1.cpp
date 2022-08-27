#include<bits/stdc++.h>

void swap_v1(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void swap_v2(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void swap_v3(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  int a = 5, b = 6;
  std::cout << "values of a & b initially: a = " << a << ", b = " << b <<std::endl;
  swap_v1(a, b);
  std::cout << "values of a & b after calling swap_v1: a = " << a << ", b = " << b <<std::endl;
  swap_v2(a, b);
  std::cout << "values of a & b after calling swap_v2: a = " << a << ", b = " << b <<std::endl;
  swap_v3(&a, &b);
  std::cout << "values of a & b after calling swap_v3: a = " << a << ", b = " << b <<std::endl;
}
