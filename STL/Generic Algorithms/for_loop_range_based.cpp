/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 17-05-2021

    @desc This code demonstrates the usage of range based for lopp with containers.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    range based for loop - Works only on C++ version >= C++11.
    
    for(range_declaration:range_expression)
        loop_statements

    This can be used for any container which supports Bi-directional iterators.
*/
int main(){
    int a[7]={5,4,3,2,1};

    vector<int>v(10);
    for(int i=0;i<10;i++)v[i]=i+1;

    for(auto i: v)cout<<i<<" "; 
    cout<<endl;    
    /*
        Similar to that of in Python 
        for i in list1:
            print(i)
    */
    for(auto i: a)cout<<i<<" ";
    cout<<endl;

    string str="Praveen Reddy";
    for(char i: str)cout<<i<<" ";
    cout<<endl;
    for(auto i: str)cout<<i<<" ";
    cout<<endl;

    for(int i:{100,200,300,400,500})cout<<i<<" ";
    cout<<endl;

    return 0;
}