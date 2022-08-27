#include<iostream>

class Distance {
  float inches;
  float feet;

  public:
  //constructor
  Distance(float inches, float feet){
    
    
    feet = feet + (float)(int(inches / 12));
    inches = (int)inches % 12 + (inches - (int)inches);


    this->inches = inches;
    this->feet = feet;
  }
  
    void display(){
    std::cout << "distance: " << feet << " feet and " << inches << " inches " <<std::endl;
  }

  Distance(){
    this->inches = NULL;
    this->feet = NULL;  
  };

  void add(Distance d1, Distance d2){
    float inches = d1.inches + d2.inches;
    float feet = d1.feet + d2.feet;
      
    feet = feet + (float)(int(inches / 12));
    inches = (int)inches % 12 + (inches - (int)inches);

    this->inches = inches;
    this->feet = feet;
  }

  Distance add(Distance d){ 
    inches = this->inches + d.inches;
    feet = this->feet + d.feet;
    return Distance(inches, feet);
  }

};

int main(){
  Distance d1 = Distance(25.6, 4);
  d1.display();
  Distance d2 = Distance(12, 5.5);
  d2.display();
  Distance d3 = Distance();
  d3.add(d1, d2);
  d3.display();
  
  Distance d4 = d1.add(d2);
  d4.display();
}
