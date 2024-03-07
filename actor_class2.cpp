#include<iostream>
using namespace std;
#include<cstring>
class Actor
{
    public:
        string fis_nm;
        string ls_nm;
        int age;
        int tt_film;
};

int main()
{
    Actor a;
    a.fis_nm="ALi";
    a.ls_nm="Hasan";
    cout <<a.fis_nm +  ' ' + a.ls_nm<< endl;
    cout<<"Enter age:";
    cin>>a.age;
    cout<<"\nAge of actor is:"<<a.age;
    a.tt_film = 10;
    cout<<"Total film created by actor are:"<<a.tt_film;
    cout << a << endl;
    return 0;
}