#include<iostream>
using namespace std;
//Drawback in CPP OOPs. Private members can also be accessed outside the class 
class A{
    private:
        int x;
    public:
        A(){
            x=0;
        }
        friend void B::showA(A&);
};
class B{
    private:
        int y;
    public:
        void showA(A& ob){    //Call By Reference
            cout<<ob.x;      //Accessing private member of some other class
        }
};
int main(){
    A obj1;
    B obj2;
    obj2.showA(obj1);
    return 0;
}