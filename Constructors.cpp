#include<iostream>
#include <cstring>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;

    Hero()  //default constructor
    {
       cout<<"default constructor called"<<endl;
       name = new char[100];

    }

     //Paramerterised consturctor
    Hero(int health, char level) {
        this-> level = level;
        this -> health = health;
     }

     //Copy constructor
    //  Hero(Hero &temp){
    //      cout<<"Copy constructor called"<<endl;
    //      this->health = temp.health;
    //      this->level = temp.level;
    //     }

        void print(){
           cout<<endl;
           cout<<"Name: " << this->name<<" ,";
           cout << "health : " << this->health <<" ," << endl;
           cout <<"level : " << this->level << endl;
           cout<<endl;
        }

    int getHealth() {
        return health;
     }

     char getLevel(){
        return level;
     }

     void setHealth(int h){
        health = h;
     }

      void setLevel(char ch){
        level = ch;
      }

     void setName(char name[])
     {
       strcpy(this->name, name);
     }


};

int main(){


Hero hero1;

hero1.setHealth(13);
hero1.setLevel('D');
char name[7] = "Babbar";
hero1.setName(name);


hero1.print();

//use default copy constructor

Hero hero2(hero1);
hero2.print();
// Hero hero2 = hero1;

hero1.name[0] = 'G';
hero1.print();


//  Hero S(70,'C');
//  S.print();

//  //called copy constructor
//  Hero R(S);
//  R.print();





    //object crated staticaly
   
    // Hero ramesh(10);
    // // cout << "Address of ramesh " << &ramesh <<endl;
    // // ramesh.getHealth();
    
    
    // //Dynamically
    // Hero *h = new Hero(11);
    // h->print();

 
    
    return 0;
}
















