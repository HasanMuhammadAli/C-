#include<iostream>
using namespace std;
float SI(int p,int n,float r=0.15);
float SI(int p,int n,float r){
    return(p*r*n)/100;
}

int main()
{
    int p,n;
    
    cout<<"Enter p,n:"<<endl;
    cin>>p>>n;
    cout<<"SI="<<SI(p,n);
    return 0;
}