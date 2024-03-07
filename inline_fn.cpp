#include<iostream>
using namespace std;
inline int add(int , int);
inline int add(int x, int y){
    return (x+y);
}

int main()
{
    int a=10,b=20;
    cout<<"a+b="<<add(a,b);
    return 0;
}