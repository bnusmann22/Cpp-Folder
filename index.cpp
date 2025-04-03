#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Calculating the area of a circle
int main() {
    // C++ references
    string name = "Jamil";
    string &caller = name;
    string* ptr = &name;

    // memory access
    //The memory address is in hexadecimal form (0X..)

    //C++ pointers
    //A pointer is a variable that stores the memory address as its value.

    // Dereferencing
    cout <<  name << "\n";

    cout <<  ptr<< "\n";
    cout <<  *ptr<< "\n";
    return 0;
}
