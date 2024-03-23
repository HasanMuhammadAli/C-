/*
    Author:Ali
    Topic:Friend function
    Date:23/3/24
*/

#include<iostream>
using namespace std;

class XYZ;
class ABC{
    private:
        int x;
    public:
        void getdx();
        void putdx();

        friend void max(ABC,XYZ);

};
class XYZ{
    private:
        int y;
    public:
        void getdy();
        void putdy();

        friend void max(ABC,XYZ);
        
};

void ABC::getdx(){
    cout<<"Enter x:";
    cin>>x;
}

void XYZ::getdy(){
    cout<<"Enter y:";
    cin>>y;
}

void ABC::putdx(){
    cout<<"X="<<x;
}

void XYZ::putdy(){
    cout<<"\nY="<<y;
}

void max(ABC A,XYZ X){
    if(A.x > X.y){
        cout<<"\nA.x is greater:"<<A.x;
    }
    else
        cout<<"\nX.y is greater:"<<X.y;
}

int main(){
    ABC A;
    XYZ X;
    A.getdx();
    X.getdy();
    A.putdx();
    X.putdy();
    max(A,X);

    return 0;
}