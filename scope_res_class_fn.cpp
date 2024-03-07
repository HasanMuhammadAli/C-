#include<iostream>
using namespace std;
class number{

    private:
        int x,y; 
       // int x1;

    public:
        void read();
        void display();
        void max();
};
//using scope resolution op on memeber fn of class
void number::read(){
    cout<<"Enter x and y:"<<endl;
    cin>>x>>y;
}

void number::display(){
    cout<<"\nx="<<x<<endl;
    cout<<"y="<<y<<endl;
}

void number::max(){
    if(x>y)
        cout<<"Max = X ="<<x<<endl;
    else
        cout<<"Max = y ="<<y;
}

int main(){
    number n;
    n.read();
    n.display();
    n.max();
    return 0;
}