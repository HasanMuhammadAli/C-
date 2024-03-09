#include <iostream>
using namespace std;



class Player {
  public:
    Player() {
      health = 100;
      score = 0;
      level = 1;
    }
    void ChangeLevel() {
      level += 1;
      cout << "Level: " << level << endl;
    }
  
  private:
    int health;
    int score;
    int level;
};



int main() {
  
 

  Player mario;
  mario.ChangeLevel();


  
  return 0;
  
}