/**
  * DOCUMENTATION
  * Author: Praveen Reddy Chalamalla
  * Created on 10-05-2021

  * @desc This code demonstrates Destructors.
*/
#include<iostream>
using namespace std;
/* Destructor is a special method invoked automatically when an object is deleted(Destroyed) or scope of an object ends.
 * Destructor name is same as classname preceeded by tilde (~)       
 * ~classname(){
 * }
 * Destructor does not have arguments, no return type (Not even void)
 * Destructor should be declared in the public section only and cannot be declared as static or const
 * You cannot access the address of destructor
 * There can be only one destructor in a class

 * When the scope of objects expire their destructors are invoked in reverse of the order of their declarations.
*/
class MyClass{
    int a;
    public:
        MyClass(int a){
            this->a=a;
            cout<<"Constructor: "<<this->a<<endl;
        }
        ~MyClass(){
            cout<<"Destructor : "<<a<<endl;
        }
};

void myFun1(int x){
    MyClass obj1(x);
}//Scope of obj1 expires.

void myFun2(int x){ 
    static MyClass obj1(x); //As it is a static member, scope of objects will be expired after program execution
    //Static members are initialized only once in a life time.
}
int main(){
    MyClass obj1(1),obj2(2),obj3(3);
    myFun1(4);
    myFun1(5);
    myFun2(6);
    myFun2(7); 
    return 0;
} //Scope of objects obj1,obj2,obj3 expire.