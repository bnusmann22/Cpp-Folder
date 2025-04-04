#include <iostream>
using namespace std;

class MyClass {
public:
    int myNum;
    string myString;
};

class Car {
public:
    string brandName;
    string model;
    int year;
};

int main(){
    MyClass myObj;
    myObj.myNum = 25;
    myObj.myString = "Jamil";


    Car firstCar ;
    firstCar.brandName= "Benz";
    firstCar.model= "c300";
    firstCar.year= 5;

    Car secondCar ;
    secondCar.brandName= "Toyota";
    secondCar.model= "Camry";
    secondCar.year= 15;

    cout <<  myObj.myNum<<"\n";
    cout <<  myObj.myString;
    cout << endl;

    cout << firstCar.brandName << " " << firstCar.model << " " << firstCar.year ;
    cout << endl;
    cout << secondCar.brandName << " " << secondCar.model << " " << secondCar.year ;
   // cout << secondCar;
    return 0;
}
