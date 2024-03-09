#include<iostream>
using namespace std;
#include<cmath>
/*FindRadius is the helper fn of FindArea*/
double FindRadius(double x1, double y1, double x2, double y2) {
  return(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
}


double FindArea(double x1, double y1, double x2, double y2) {
  return(M_PI * pow(FindRadius(x1, y1, x2, y2), 2));
}

int main() {
  cout << FindArea(0.0, 0.0, 4.0, 4.0) << endl;
  return 0;
}