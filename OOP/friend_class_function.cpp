/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 10-05-2021

    This code demonstrates the concept of friend functions.
*/
#include<iostream>
using namespace std;
//Friend function can be a function defined in global scope i.e., Normal external function
//Friend function can be a method of other class also.
class B;
class MyClass{
    int a; //Private By default
    private:
        friend int add1(MyClass); //Declaring that an external function add is friend to this class().
        friend int add2(MyClass &); //can be mentioned anywhere public/private scope.
    public:
        MyClass(){
            a=5;
        }
        int get(){
            return a;
        }
        friend void modify();
        friend class B;
};
class B{
    private:
        int b;
    public:
        void showMyClass(MyClass &ob){
            cout<<ob.a<<endl;
        }
};
void modify(){
    MyClass obj;
    cout<<"Private Member of Class A = "<<obj.a<<endl;
}
int add1(MyClass ob){   //Pass By Value - Default Copying.
    ob.a+=5; //Friend function accessing private member.
    return ob.a;
}
int add2(MyClass &ob){   //Pass By Reference
    ob.a+=5; 
    return ob.a;
}
int main(){
    MyClass obj;
    B obj2;
    //cout<<obj.a;       Not Allowed Results in error. Private member cannot be accessed outside class.
    modify();
    cout<<obj.get()<<endl;
    cout<<add1(obj)<<endl; //Pass By Value
    cout<<obj.get()<<endl;
    cout<<add2(obj)<<endl; //Pass By Reference.
    cout<<obj.get()<<endl; 
    obj2.showMyClass(obj);
    return 0;
}