#include<bits/stdc++.h>

#define PI 3.141

float area(float radius) {
  return (PI * radius * radius);
}

float area(float l, float b) {
  return (l * b);
}

float area(float l, float b, float h) {
  return (l * b * h);
}

int main(){
  float radius = 5.5, l = 2.2, b = 3.1, h = 5.8;
  std::cout
    << "area of circle with radius "
    << radius
    << " : "
    << area(radius)
    << std::endl
    << "area of rectangle with length "
    << l 
    << " and breadth "
    << b
    << " : "
    << area(l, b)
    << std::endl
    << "volume of box with length "
    << l
    << " breadth "
    << b
    << " height "
    << h
    << " : "
    << area(l, b, h)
    <<std::endl;

}
