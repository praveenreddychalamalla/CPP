/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 11-05-2021

    This code demonstrates principle of Inheritance.
*/
#include<iostream>
using namespace std;
class Base{
    public:
        float salary=10000;
};
class Derived:public Base{
    public:
        float bonus=5000;
};
int main(){
    Derived ob;
    cout<<ob.salary<<endl;
    cout<<ob.bonus<<endl;
}