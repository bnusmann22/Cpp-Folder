#include <iostream>
using namespace std;

void myFunction(){
    cout << "Hello C++ functions";
    cout << endl;
    cout << "It actually doesn't supports Emojis 🚀😍";
    cout << endl;
}

void funcWithPars(string name){
    cout << "Hello " << name;
    cout << endl;
}

void funcWithDefPars(string rel = "Muslim"){
    cout << "I am a  " << rel;
    cout << endl;
}

void mulPars(int age, string name){
    cout << "Hello " << name;
    cout << endl;
    cout << "I am " << age << " Years Old";
}
int retrnFunc(int x) {
  return 5 + x;
}

int main(){
    cout<< "\n";
    cout<< "About to call a function";
    cout << endl;
    cout << retrnFunc(25);
    funcWithPars("Ameenah");
    cout << endl;
    funcWithDefPars();
    cout << endl;
    funcWithPars("Josh Cameau");
    cout << endl;
    funcWithDefPars("Christain");
    cout << endl;
    mulPars(18, "Fatima");
    cout<< "\n";
    myFunction();
    return 0;
}
