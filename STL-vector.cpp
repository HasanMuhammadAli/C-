#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<int> a1;
    int k;
    for(int i=0;i<10;i++)
    {
       // cin>>k;
        a1.push_back(i);
    }
    a1.push_back(10);
    a1.push_back(20);
     for (auto it = a1.begin(); it != a1.end(); it++) 
        cout << *it << " "; 
    cout<<a1.size();
    cout<<a1.max_size();
    

    return 1;
}