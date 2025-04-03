#include <iostream>
using namespace std;

// Function Overloading
int plusFunc(int x, int y){
    return x + y;
}

 double plusFunc(double x, double y){
    return x + y;
}

int main(){
    int myNum = plusFunc(8, 10);
    double myNum2 = plusFunc(10.2, 1.62);
    cout << "Int: "<< myNum << "\n";
    cout << "Double: "<< myNum2;
    return 0;
}
