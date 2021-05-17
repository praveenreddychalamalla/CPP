#include<iostream>
using namespace std;
//Constructor is special method called when an object is created to initialize the object attributes.

//Note: When an object is created , first memory will be allocted  and then constructor will be invoked

//**Constructor do not have any return type and must to make them public**. 

//Constructor name should be same as that of class name.
//Just like other methods, constructors can also be declared inside the class and can be defined outside the class.

/*If we don't define a constructor in any class, C++ compiler generates a default constructor for us which takes no 
 * input as parameter and has an empty body*/

// 3 types of Constructors- Default constructor , Parameterized constructor , Copy constructor.
// Default copying is possible due to Copy constructor only.

//If we do not create a copy constructor it will be created by compiler by default.

/* class_name(const class_name &){
    code to copy all the attribute of the reference object passed
}*/

class MyClass{ 
    int x; 
    public:
        MyClass(){   //Default Constructor - Empty parameter list
            x=0;
        }
        MyClass(int a){   //Parameterized Constructor
            x=a;
        }
        MyClass(const MyClass& ob){ //Copy Constructor- We can change the functionality of copy constructor as per our needs
            x=ob.x+5;
        }
        void show(){
            cout<<x<<endl;
        }
};
//A class cannot hold constructor or destructor of any other class.
int main(){
    int a;
    cin>>a;
    MyClass ob1,ob2(a); //Constructor overloading.
    ob1.show();
    ob2.show();
    MyClass temp=ob2;  
    temp.show();
    return 0;
}
