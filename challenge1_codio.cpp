#include<iostream>
using namespace std;
#include<cstring>



int main()
{
  Dog dog1;
  dog1.name="Marceline";
  dog1.breed="German Shepherd";
  Dog dog2 = dog1;
  dog2.name = "Cajun";
  dog2.breed = "Belgian Malinois";
  cout << dog1.name << " " << dog1.breed << endl;
  cout << dog2.name << " " << dog2.breed << endl;
  if (dog1.name == dog2.name && dog1.breed == dog2.breed) {
    cout << boolalpha << true;
  }
  else {
    cout << boolalpha << false;
  }
  return 0;
}



    
