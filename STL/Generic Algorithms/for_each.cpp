#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    for_each() helps us to iterate through containers easily.

    template<class InputIterator, class Function>
    Function for_each(InputIterator first, InputIterator last, Function fn); Applies fn to each of the elements in the range[first, last).

    fn is a unary function that accepts an element in the range as argument. Similar to lambda function in python.
    This can be function pointer or a move constructibe function object Its return value, if any, is ignored.
*/
struct A{       //By default, members of a structure are public
    void operator ()(int& i){ //Similar to class, we can overload an operator for a structure also.
        cout<<i*2<<" ";
        i+=2;
    }
};
void fun(int i){
    cout<<i<<" ";
}
int main(){
    vector<int>v;
    for(int i=0;i<10;i++)v.push_back(i+1);
    for_each(v.begin(),v.end(),fun);
    cout<<endl;

    vector<int>v1(v);
    struct A obj;
    for_each(v1.begin(),v1.end(),obj); 
    //for_each(v1.begin(),v1.end(),A()); also works . Similar to that of passing a class name where operator () is overloaded.
    cout<<endl;

    for_each(v1.begin(),v1.end(),fun);
    return 0;
}