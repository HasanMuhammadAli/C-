#include<iostream>
using namespace std;
#include<cstring>
#include<vector>

class Meal {
  public:
    void AddDrink(string drink) {
      drinks.push_back(drink);
    }
    void PrintDrinks() {
      for (auto a: drinks) {
        cout << a << endl;
      }
    }
  
  private:
    vector<string> drinks;
    vector<string> appetizers;
    vector<string> main_courses;
    vector<string> desserts;
};

int main(){
    Meal dinner;
    dinner.AddDrink("water");
    dinner.PrintDrinks();
    return 0;
}