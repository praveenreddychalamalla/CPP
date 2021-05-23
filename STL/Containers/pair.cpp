#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
    Pairs are similar to tuples.

    template<class T1, class T2>struct pair;
    This class couples together a pair of values, which may be of different data types (T1, T2). 
    The individual values can be accessed through its public members first, second.

    template<class T1, class T2>
    pair<T1, T2> make_pair(T1 x, T2 y); // Constructs a pair object with first member set to x and second member set to y.

*/
int main(){

    //PAIR CONSTRUCTORS

    pair<int, int>p1; //default . Will be set to 0;
    pair<int, char>p2(1,'a'); //Initialize with different data types
    pair<int, int>p3(1,10); //Initialize with same data type
    pair<int, int>p4(p3); //Copy Constructor.
    pair<int, char>p5=make_pair(1,'a'); //Using make_pair
    pair<int, int>p6(1,11);

    //PAIR OPERATORS

    //In pairs <, >, are overloaded with first member by default.
    // == returns true only if both the values of pair are equal
    
    if(p3==p4)cout<<"Equal"<<endl; //cout << p3==p4; results error.
    if(p3<p6)cout<<"Less than or equal to"<<endl;
    cout<<p3.first<<" "<<p3.second<<"";
  
    return 0;
}
