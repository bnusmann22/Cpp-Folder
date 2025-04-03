#include <iostream>
using namespace std;

int main(){
    for(int i= 0; i<= 6; i++){
        for (int j = 1; j<=4; j++){
            cout << " ";
        }
        for (int k = 1; k<= 2 * (i -1); k++){
            cout << "*";
        }
         cout << endl;
    }
    return 0;
}

