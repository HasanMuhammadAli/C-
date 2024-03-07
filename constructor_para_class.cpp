
#include<iostream>
using namespace std;
#include<cstring>
class Actor
{
    public:
        string fis_nm;
        string ls_nm;
        
    Actor(string fn,string ln)
    {
        fis_nm=fn;
        ls_nm=ln;
    }
};

int main()
{
  
   Actor a("Ali","Hasan");
   cout<<a.fis_nm<<' '<<a.ls_nm;
    return 0;
}