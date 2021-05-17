#include<iostream>
using namespace std;

//Usage of pointers make method overriding suppressed. To overcome this problem virtual functions are brought into scene.

/*If you have a pointer to a class A then it can be assigned the objects of class A or even any object of a class that inherits class A(Multilevel)
This is allowed, but reverse is not possible i.e., a pointer of a derived class object cannot be assigned an object of its parent class or higher class
But if you try to access the methods of the class through the pointer, 
the methods of base class for which it is declared will be invoked if there are any conflicts.*/

class Base{
    public:
        void print(){
            cout<<"Base Function"<<endl;
        }
};
class Derived: public Base{
    public:
        //You can also mention override keyword  explicitly
        // void print () override{} . Good practice
        
        void print(){ //Overrides the print method of base class
            cout<<"Derived Function"<<endl;
        }
};
int main(){
    Derived d;
    d.print();
    d.Base::print(); // Resolve the scope to call the print method that has been inherited from class Base.

    // Usage of pointers leading to suppression of method overriding.

    Base *ptr; // ptr is a pointer to type class Base
    ptr=&d; // ptr is assigned an object of type class Derived (Which inherited class Base)
    ptr->print(); // overridden print() method of class Derived will not be invoked, instead class Base's print() method will be invoked

    // Same situation is resulted in the following case 
    
    Base b=Derived();// An object b of class Base is holding(pointing to) an object of its child class
    b.print(); //Invokes class Base print function but not class Derived print function. 
    return 0; 
}