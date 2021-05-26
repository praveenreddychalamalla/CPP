/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 11-05-2021

    This code demonstrates the concept of run time polymorphism through method overriding.
*/
#include<iostream>
using namespace std;
//This method overriding demonstrates the run time polymorphism in c++
class B{
    int a;
    public:
        B(int x){a=x;}
        virtual int fun(){
            return a;
        }
};
class D1:public B{
    int a;
    public:
        D1(int x):B(x+2){
            a=x;
        }
        int fun ()override{
            return a+a;
        }
};
class D2:public B{
    int a;
    public:
        D2(int x):B(x+2){
            a=x;
        }
        int fun ()override{
            return a*a;
        }
};
 void print(B* b){ 
        cout<<"Value: "<<b->fun()<<endl; // At compile time you cannot be sure of which fun will be called
        //During runtime, after memory allocation of objects, depending on the type of object pointer passed corresponding fun will be invoked
}
int main(){
    B* b1=new B(1); 
    B* b2=new D1(2);
    B* b3=new D2(3);
    print(b1); //passing object pointer of type class B, Hence invokes fun of class B.
    print(b2); //passing object pointer of type class D1, Hence invokes overridden fun of class D1.
    print(b3); //passing object pointer of type class D2, Hence invokes overridden fun of class D2.
    return 0;
}