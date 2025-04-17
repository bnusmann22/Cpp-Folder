#include <iostream>
using namespace std;

class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

class License{
public:
    string year = "2025";
};
// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};


// Multi Level Inheritance
class Motor: public Car{
public:
    string engine = "V8";
};


// Multiple Inheritance
class LegalCar: public Vehicle, public License{
};
int main() {

 LegalCar myMotor;
  myMotor.honk();
  cout <<  myMotor.brand  + " " +  myMotor.year;
  return 0;
}
