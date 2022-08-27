#include<iostream>

#define PI 3.141

float area_vol(float radius) {
  return (PI * radius * radius);
}

float area_vol(float radius, bool flag) {
  return flag?(4.0/3.0 * PI * radius * radius * radius):0.0;
}

int main() {
  float radius = 5.5;
  std::cout 
    << "area of circle with radius "
    << radius
    << " : "
    << area_vol(radius) 
    << std::endl
    << "volume of sphere with radius  "
    << radius
    << " : "
    << area_vol(radius, 1)
    << std::endl;
} 
