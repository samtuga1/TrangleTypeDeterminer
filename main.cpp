#include <iostream>
using namespace std;

int main() {

    double side1, side2 , side3;

cout << "Please enter the magnitude of side 1: ";
cin >> side1;

cout << "Please enter the magnitude of side 2: ";
cin >> side2;

cout << "Please enter the magnitude of side 3: ";
cin >> side3;

if(side1 == side2 && side2 == side3){
    cout << "Your triangle is an equilateral triangle";
  }  // && is a logical AND operator

 else if(side1 == side2||side2 == side3||side3 == side1){
    cout << "Your triangle is an isosceles triangle";
  }  // || is a logical OR operator

 else {
    cout << "Your triangle is an scalene triangle";
  }
}
