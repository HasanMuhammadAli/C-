//add class definitions below this line
 #include<iostream>
 using namespace std;
 #include<cstring>

class ComicBookCharacter {
  public:
    string name;
    int age;
    string type;
};
  
//add class definitions above this line

int main() {
  
  //add code below this line

  ComicBookCharacter a;
  a.name = "Ali";
  a.age = 16;
  
    
  ComicBookCharacter b = a;
  b.name = "Hamzah";
    
  cout << "Object a name: " << a.name << endl;
  cout << "Object a age: " << a.age << endl;
  
  cout << "Object b name: " << b.name << endl;
  cout << "Object b age: " << b.age << endl;
  
  
  
  //add code above this line
  return 0;
}