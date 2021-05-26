/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 12-05-2021

    This code demonstrates the concept of abstract class.
*/
#include<iostream>
using namespace std;
//Similar to abstract methods in JAVA.

// virtual <Function prototype> =0. Syntax of pure virtual function

/*Pure virtual function is used, if a function doesn't have any use in base class(Typically empty body) 
but the function must be implemented by all  its derived class.*/ 

//A class which possess atleast 1 pure virtual function is called an abstract class.

/*You cannot create objects for abstract classes (Note: But you can create pointers of type abstract class)
But you can inherit them in other classes, 
define the pure virtual functions(Provide implementation)then create objects for derived class*/

class B{
    int a;
    public:
        virtual int fun()=0; //Its declaration of pure virtual function, not assigning 0 to function
};
// B is abstract class hence you cannot create objects for class B directly.

class D: public B{ //As D inherits abstract class B fun must be provided implementation else results error
    int a=100;
    public:
        int fun()override{
            return a;
        }
};
int main(){
    D d1;
    B* ptr; //Allowed, but this ptr can be only used to point to derived class objects of B
    //B b1; results error
    cout<<d1.fun();
    return 0;
}