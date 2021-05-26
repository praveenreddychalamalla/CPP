/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 11-05-2021

    This code demonstrates the operator overloading of function call operator.
*/
#include<iostream>
using namespace std;
struct Linear{
    double a,b;

    double operator ()(double x) const{ //constant method overloading. Parameters passed must be operated in read only mode
        return a*x+b;
    }
};
int main(){
    Linear f{2,1},g{-1,0};
    double f_0=f(0); // You made it to be interpreted like mathematical function, as function call () operator is overloaded.
    double g_1=g(1);
    cout<<f_0<<" "<<g_1; 
    return 0;
}