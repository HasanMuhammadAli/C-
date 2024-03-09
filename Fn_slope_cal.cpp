#include<iostream>
using namespace std;
void GetSlope(double x1, double y1, double x2, double y2) {
    cout << (y2 - y1) / (x2 - x1) << endl;
}
int main() {
  GetSlope(3, 2, 5, 6);
  return 0;
}