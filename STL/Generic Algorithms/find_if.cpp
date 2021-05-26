/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 16-05-2021

    This code demonstrates the usage of find_if function.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    Opeartes with a Unary Predicate

    template <class InputIterator, class UnaryPredicate>
    InputIterator find_if (InputIterator first, InputIterator last, UnaryPredicate pred); 

    find_if() returns an iterator pointing to the first occurance of element satisfying the UnaryPredicate pred in the range[first, last) of the container. 
    If no such occurance is found then last is returned (Iterator pointing to past the last element of container)

    Unary predicate can be any function which takes 1 argument and returns a type convertible to bool
*/
bool IsEven(int i){return i%2==0;}
int main()
{
    int a[]={1,3,5,1,4,6,5,5,4,7};
    vector<int>v(a,a+10);
    vector<int>::iterator it;

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    it=find_if(v.begin(),v.end(),IsEven);  //Returns an iterator pointing to the first occurance of an even number in v
    if(it!=v.end()) cout<<"First Even Number is at pos: "<<it-v.begin()<<endl;
    else cout<<"No Even Number is found"<<endl;

    return 0;
} 
