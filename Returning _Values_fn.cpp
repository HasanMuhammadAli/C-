#include<iostream>
using namespace std;
#include<cstring>
/**
 * This function adds two integers together
 * 
 * @param x The first integer
 * @param y The second integer
 * @return x added to y
 */
int ReturnInt(int x, int y) { //int function
  return(x + y);
}

/**
 * This function adds two doubles together
 * 
 * @param x The first double
 * @param y The second double
 * @return x added to y
 */
double ReturnDouble(double x, double y) { //double function
  return(x + y);
}

/**
 * This function adds two strings together
 * 
 * @param x The first string
 * @param y The second string
 * @return x added to y
 */
string ReturnString(string x, string y) { //string function
  return(x + y);
}

int main() { //int function
  cout<< ReturnInt(1, 2) <<endl;
  cout<< ReturnDouble(1, 2) <<endl;
  cout<< ReturnString("1", "2") << endl;
  return 0;
}