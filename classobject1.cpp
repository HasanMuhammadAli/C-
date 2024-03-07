#include<iostream>
using namespace std;

class player
{
    private:
        char name[10];
        int age;
    public:
        void getdata();
        void display();
};

void player::getdata()
{
    cout<<"Enter name of player ";
    cin>>name;
    cout<<"Enter age of player";
    cin>>age;
}

void player::display()
{
    cout<<"Name of player:"<<name<<endl;
    cout<<"Player age:"<<age<<endl;
}

int main()
{
    player p1;
    p1.getdata();
    p1.display();
    return 0;
}