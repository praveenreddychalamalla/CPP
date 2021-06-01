/**
  * DOCUMENTATION
  * Author: Praveen Reddy Chalamalla
  * Created on 11-05-2021

  * This code demonstrates the concept of operator overloading - Compile time polymorphism.
*/
#include<iostream>
using namespace std;
// All unary and binary operators can be overloaded, except 5 operators 
// .(Member Selection) .*(Member selection through function pointer) ::(scope resolution) ?: (Ternary operator)  sizeof() cannot be overloaded in C++

// Two operators = and & are overloaded by default i.e., = for default copy and & for address extraction.
// Hence its not a good practice to overload =, & again.

// Operator overloading cannot change the associativity and precedence of operators.

// overloading of operator -> must return a raw pointer or an object(by reference or by value) for which -> is overloaded

// Overloading of &&, || results in loose of short circuit evaluation.
class Complex{
    double a,b;
    public:
        Complex(double x, double y){
            a=x;b=y;
        }
        //Member Function overloading.
        Complex operator +(Complex const &ob){ //operator is a keyword . You can escape const qualifier, but its a good practice to use.
            Complex temp(a+ob.a,b+ob.b);
            return temp;
        }
        void show(){
            cout<<a<<" "<<b<<endl;
        }
};
class Count{
    public:
        int value;
        void operator ++(){  //Pre increment. No need to pass the arguments, complier will call this method on the object for which it is called
            cout<<"I am pre increment"<<endl;
            value++;
        }
        //For post increment you need to pass a dummy parameter.
        void operator ++(int){ //Post increment. Pass the argument as data type of value that has to be incremented, to distinguish between pre and post 
            cout<<"I am post increment"<<endl;
            value++;
        }
};
int main(){
    Complex obj1(3.0,5.0),obj2(10.0,20.0);
    Complex obj3=obj1+obj2;  // Equivalent to obj3=obj1.operator+(obj2), operator + is called on obj1 with obj2 as argument.
    // Hence the syntax:  operator +(const Complex &ob) is defined  so in the class.
    obj3.show();
    Count c;
    c.value=1;
    c++;
    cout<<c.value<<endl;
    ++c;
    cout<<c.value<<endl;
    return 0;
}