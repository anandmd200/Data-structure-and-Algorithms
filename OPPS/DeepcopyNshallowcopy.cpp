#include<bits/stdc++.h>
using namespace std;

class hero{

  private:
  int height;
  char level;

  public:

  string name;
  
  // Parameterised constructor 
  hero(int h,char l, string name){
    this->height = h;
    this->level = l;
    this->name = name;
  }

  //copy constructor

  hero(hero& oldobj){

      string name = oldobj.name;
      this->height = oldobj.height;
      this->level = oldobj.level;
      this->name = name;
  }
  void display(){
    cout<<height<<" "<<level<<" "<<name<<endl;
  }

  void setheight(int h){
    height = h;
  }

  
  ~hero(){
      cout<<"Distructor is called "<<endl;
  }
};

int main(){
  
  hero h1(12,'A',"david");
  hero h2 = h1; // hero h2(h1);
  h1.name = "mark";
  h1.display();
  h2.display();

}

