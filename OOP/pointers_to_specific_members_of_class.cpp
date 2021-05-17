#include<iostream>
using namespace std;
class A{
    public:
        int x;
        A(){
            x=100;
        }
        void show(){
            cout<<x<<endl;
        }
};
int main(){
    A obj,*op; // op is pointer to type class A
    op=&obj;
    int A:: *ptr; //ptr is a pointer to an integer present in class A. ptr can hold the address of any integer of type class A
    ptr=&A::x; //ptr is a pointer to data member x in class A
    cout<<obj.x<<endl;
    cout<<obj.*ptr<<endl;
    cout<<op->x<<endl;
    cout<<op->*ptr<<endl;
    void(A::*fp)(); //fp is a pointer to function present in class A expecting no arguments and returning void type.
    fp=&A::show;
    // Note: Becareful with parenthesis.
    (obj.*fp)();  // Same as obj.show();
    return 0;
}