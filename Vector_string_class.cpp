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
    void Add_desert(string dessert) {
      desserts.push_back(dessert);
    }
    void Print_desert() {
      for (auto a: desserts) {
        cout << a << endl;
      }
    }
  
  private:
    vector<string> drinks;
    vector<string> desserts;
};

int main(){
    Meal dinner;
    dinner.AddDrink("water");
    dinner.PrintDrinks();
    dinner.Add_desert("Chicken");
    dinner.Print_desert();
    return 0;
}