#include <iostream>

using namespace std;



class Vehicle {
 public:
 string brand = "Ford";
 void honk() {
 cout << "Tuut, tuut! \n" ;
}
};


// Derived class
class Car: public Vehicle {
 public:
 string model = "Mustang";
 void honk(){
     cout<<"biib \n";
 }
};


int main() {
Vehicle v1;
v1.honk();

 Car myCar;
 myCar.honk();
 cout << myCar.brand + " " + myCar.model;
 return 0;
}
