#include <iostream>
using namespace std;


// inside class
class MyClass{
public:
    void myMethod(){
        cout << "Hello World";
    }
};

// outside Class
class NewClass{
public:
    void newMethod();
};

void NewClass::newMethod(){
    cout << "Hello New Class";
}

int main(){
    MyClass myObj;
    myObj.myMethod();

    NewClass newObj;
    newObj.newMethod();
    return 0;
}
