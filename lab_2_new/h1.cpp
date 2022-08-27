#include<bits/stdc++.h>
#include <ostream>

float absolute(float n) {
  return (n > 0.0) ? n : (-1.0 * n);
}

int absolute(int n) {
  return (n > 0) ? n : (-1 * n);
}

int main() {
  int n_int = -6;
  float n_float = -6.6;
  std::cout 
    << absolute(n_int)
    << std::endl
    << absolute(n_float)
    << std::endl;
}
