#include<iostream>
using namespace std;
double input1;
double input2;
double input3;
double input4;

void GetSlope(double x1, double y1, double x2, double y2) {
  double y_change = y2 - y1;
  double x_change = x2 - x1;
  cout << y_change / x_change << endl;
}

int main() {
  cout << "Enter first x coordinate: " << endl;
  cin >> input1;
  cout << "Enter first y coordinate: " << endl;
  cin >> input2;
  cout << "Enter second x coordinate: " << endl;
  cin >> input3;
  cout << "Enter second y coordinate: " << endl;
  cin >> input4;
  
  GetSlope(input1, input2, input3, input4);
}