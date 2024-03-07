#include<iostream>
using namespace std;
int area(int);
int area(int,int);

int area(int s){
    return(s*s);
}

int area(int l,int b){
    return(l*b);
}
 int main(){
    int s,l,b;
    cout<<"Enter side of square:"<<endl;
    cin>>s;
    cout<<"Area of squa="<<area(s);

    cout<<"\nEnter l,b:"<<endl;
    cin>>l>>b;
    cout<<"Area of rect="<<area(l,b);

    return 0;
 }