/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 9-05-2021
*/
#include<iostream>
using namespace std;
class A{
    public:
        int x;
    
        A(){
            x=100;
        }
};
int main(){
    A obj;
    A *ptr; //ptr is a pointer to type class A. ptr can hold the address of any object of type class A
    ptr=&obj;
    cout<<obj.x<<endl;
    cout<<ptr->x<<endl;//(*ptr).x 
    return 0;
}