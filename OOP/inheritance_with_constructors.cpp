#include<iostream>
using namespace std;
/* Whenever an objected is created for a derived class, 
constructor of base class is invoked first and then the constructor of derived class is invoked.

In case of multilevel inheritance, a derived class can invoke only its immediate parent class constructor which may/maynot invoke constructor chaining.
But you cannot access the constructor of grand parent class or higher class explicitly.

In case of multiple inheritance, constructors are invoked in the order of inheritance declared, even though you alter the order explicitly.

*/
class A{
    public:
        A(){
            cout<<"A ";
        }
};
class E{
    public:
        E(){
            cout<<"E ";
        }
};

class B: public A{
    public:
        B(){    //Constructor of class A will be invoked first
            cout<<"B "<<endl;
        }
};

class C{
    public:
        C(int x){
            cout<<"C - "<<x<<endl;
        }
};
class D: public C{
    public:
        D(int a,int b):C(a){  //Passing the parameters to the parent class constructor
            cout<<"D - "<<b<<endl;
        }
};
class F: public A, E{ // Declaration order of inheritance = A, E
    public:
        F(){
            cout<<". I aquired multiple inheritance. Declared order= A, E"<<endl;
        }
};

class G: public A,E{  // Declaration order of inheritance = A, E
    public:
        G():E(),A(){  //No matter what the order you specify here, they are invoked in the order of declaration.
            cout<<". I aquired multiple inheritance. Declared order= A, E. But tried to alter the order, however it is not entertained."<<endl;
        }
};

int main(){
    B obj1;
    D obj2(10,100);
    F obj3;
    G obj4;
    return 0;
}