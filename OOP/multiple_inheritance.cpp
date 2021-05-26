/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 12-05-2021

    This code demonstrates Multiple Inheritance.
*/
#include<iostream>
using namespace std;
// If there are any conflicts during multiple inheritance use the appropriate one by resolving the scope.
class A{
    public:
        void fun(){
            cout<<"Class A"<<endl;
        }
};
class B{
    public:
        void fun(){
            cout<<"Class B"<<endl;
        }
};
class C: public A, public B{
    public:
        void fun(){
            A::fun(); //Writing fun without scope resolution :: creates an ambiguous scenario for compiler & hence generates error
            B::fun();
        }
};
int main(){
    C obj;
    //Resolve the scope of fun which you wanted to refer

    obj.fun(); //fun of class C overrides the fun of class A,B
    obj.C::fun(); // Call the function fun that is present in class C
    cout<<"---------"<<endl;
    obj.A::fun(); // Call the function fun that is inherited from class A.
    obj.B::fun(); // Call the function fun that is inherited from class B.
}