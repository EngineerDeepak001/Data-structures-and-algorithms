#include<iostream>
using namespace std; 

/// Funciton overloading
class A {
    public:
    void sayHello(char name) {
        
        cout << "Hello love babar 1"<< name <<endl;
    }
    void sayHello() {
        cout << "Hello love babar 2"<<endl;
    }

};

int main()
{
    A obj;
    obj.sayHello();

    return 0;

}