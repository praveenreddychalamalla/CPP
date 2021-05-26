/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 13-05-2021

    This code demonstrates the usage of function templates.
*/
#include<bits/stdc++.h>
using namespace std;

//Templates lets you to work in generic manner with functions and classes reducing the code size.


template<class T> // T (Any name) will be a data type following the declaration from here on(In the referred scope)
T Large(T a,T b){  //Whenever any line of code matches this function call, compiler creates the function with coresponding datatypes.
    return a>b?a:b;
}
/* 
    Note: Along with templates, you can have fixed data types also. For example Large can be declared as
    int Large(T a, int b){
        -------------;
        -------------;
    } ; Having used this you can only call this function with 1 variable data type and an int. It always return int.
*/
int main()
{
    int i1=1,i2=10;
    float f1=0.45,f2=7.6;
    char c1='a',c2='b';
    cout<<Large(i1,i2)<<endl; // Compiler creates a function int Large(int a,int b) from template
    cout<<Large(f1,f2)<<endl; // Compiler creates a function float Large(float a,float b) from template
    cout<<Large(c1,c2)<<endl; // Compiler creates a function char Large(char a,char b) from template

    //Large(i1,f1);           // Rsesults in error. Data types should be same for all the arguments and return type as declared.

/* In order to work with different data types of arguments, create multiple templates.
Multiple templates : template<class T1,T2> ; T1, T2 are two data types. Use T1, T2 as required in the argument list, return type and body of the function.
*/

    return 0;
} 
