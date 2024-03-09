#include<iostream>
using namespace std;
bool passes(int grade) {
  return (grade >= 65);
}

int main(){
    int n;
    cout<<"\n Enter n";
    cin>>n;
    
    cout<<passes(n);
    return 0;
}