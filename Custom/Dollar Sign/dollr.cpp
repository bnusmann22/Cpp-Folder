#include <iostream>
using namespace std;

int main() {
  int rows, cols;

   cout << "Enter the number of rows: ";
   cin >> rows;

   cout << "Enter the number of columns: ";
   cin >> cols;

  for (int i = 0; i < rows; ++i) { // Outer loop for rows
    for (int j = 0; j < cols; ++j) { // Inner loop for columns
       cout << "$";
    }
     cout <<  endl; // Move to the next line after each row
  }

  return 0;
}
