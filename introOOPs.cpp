#include<iostream>
using namespace std;

class Animal {
  //properties
  private:
   int weight;
 
  public:
   int age;
   string type;

   //Default Constructor
   Animal(){
      this->weight = 0;
      this->age = 0;
      this->type = "";
     cout << "Constructor called \n";
   }

   //parameterised Constructor
   Animal(int age){
     this->age = age;
     cout<< "Parametrised Constructor Called : " <<age<<endl;
   }

   //copy constructor
   Animal(Animal &obj)
{
    this->age = obj.age;
    this->weight = obj.weight;
    this->type = obj.type;
    cout<<"I am inside copy constructor " << endl;
}

   //bahavior 
   void eat(){
     cout << "Eating" << endl;
   }

   void sleep()
    {
        cout << "Sleeping" << endl;
    }

    int getWeight()
    {
        return weight;
    }
};

int main()
{ 


Animal a; //Default object
Animal *b = new Animal(121); //Parameter object

//object copy
Animal c = a;
Animal animal1(c);
//Animal d(b);


  //--------------static allocation
   // Hero a;
    //------------dynamically
   // Hero *b = new Hero;
//    //---------creation of Object
//    Hero ramesh;
//   cout << "Ramesh health is " << ramesh.getHealth() <<endl;
//    //--------------use setter
//     ramesh.setHealth(70);
//     ramesh.level = 'A';

//    cout << "health is: "<< ramesh.getHealth() <<endl;
//    cout << "Level is: "<< ramesh.level <<endl;

   return 0;

}