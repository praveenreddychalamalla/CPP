#include<iostream>
using namespace std;
//Similar to virtual functions
// Unlike destructors , constructors cannot be virtual.
class Base1{
    public:
        ~Base1(){
            cout<<"Base1 Class:: Destructor"<<endl;
        }
};
class Base2{
    public:
       virtual ~Base2(){
            cout<<"Base2 Class:: Destructor"<<endl;
        }
};
class Derived1:public Base1{
    public:
        ~Derived1(){
            cout<<"Derived1 Class:: Destructor"<<endl;
        }
};
class Derived2:public Base2{
    public:
        ~Derived2(){
            cout<<"Derived2 Class:: Destructor"<<endl;
        }
};
int main(){
    Base1 *b1=new Derived1;
    delete b1;
    cout<<"------------"<<endl;
    Base2 *b2=new Derived2;
    delete b2;
    return 0;
}