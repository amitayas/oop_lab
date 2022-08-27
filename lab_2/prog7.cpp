#include<bits/stdc++.h>

class Point {
  float x;
  float y;

  public:
  //constructor
  Point(float x, float y){
    this->x = x;
    this->y = y;
  }

  float distance(Point p) {
    return sqrt((x-p.x)*(x-p.x) + (y-p.y)*(y-p.y));
  }

  void display(){
    std::cout << "x: " << x << " y: " << y << std::endl;
  }
};

int main(){
  Point p1 = Point(2,3);
  p1.display();
  Point p2 = Point(5,6);
  p2.display();
  std::cout << "Distance: " << p1.distance(p2) << std::endl;
}
