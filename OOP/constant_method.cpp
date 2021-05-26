/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 9-05-2021

    This code demonstrates constant methods.
*/
#include<iostream>
using namespace std;
// An object declared as constant cannot be modified
// A constant object can invoke only constant methods
// Constant  member functions ensure not to modify the object on which it is called
//Constant objects should be initialized at the time of declaration only

class A{
    private:
        int x;
    public:
        A(){
            x=100;
        }
        void show1(){
            cout<<x<<endl;
        }
        void show2() const { //Constant Method. Qualifier should be just before the start of function body
            cout<<x<<endl;
        }
};
int main(){
    A obj1;
    const A obj2=obj1; 
    //obj2.show1(); //show1() is not a constant member function. Hence results in error
    obj2.show2();

}