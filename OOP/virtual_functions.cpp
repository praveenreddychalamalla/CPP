/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 12-05-2021

    This code demonstrates virtual functions.
*/
#include<iostream>
using namespace std;

// Usage of pointers make method overriding suppressed. To overcome this problem virtual functions are brought into scene.

// A virtual function is a member function in the base class that we expect to redefine in derived classes.

// Note: A virtual function cannot be static

// But it does not enforce to over ride the method. We may or may not override.
class Base{
    public:
        virtual void print(){
            cout<<"Base Function"<<endl;
        }
};
class Derived: public Base{
    public:
        void print(){ //Overrides the print method of base class
            cout<<"Derived Function"<<endl;
        }
};
int main(){
    Derived d;
    d.print();
    d.Base::print(); // Resolve the scope to call the print method that has bee inherited from class Base.

    // Method overriding is preserved.

    Base *ptr; // ptr is a pointer to type class Base
    ptr=&d; // ptr is assigned an object of type class Derived (Which inherited class Base)
    ptr->print(); // Method overriding is preserved as print() is declared as a virtual function.


    Base b=Derived();// An object b of class Base is holding(pointing to) an object of its child class
    b.print(); //Invokes class Base print function but not class Derived print function. 
    return 0; 
}