#include<iostream>
#include<vector>
using namespace std;

//Iteratos bridge the gap between containers and algorithms

/*Iterators provide a means for accessing data stored in container classes like vector, map, list, etc.
  We can access the element by deferencing  the iterator with a *. just as you would do with pointers
  Iterator types : Input Iterators, Output Iterators, Forward Iterators, Reverse Iterators, Bidirectional Iterators, Random-Access Iterators.
  class_name<template_parameters>::iterator name*/
  
int main(){
    vector<int>v{1,2,3,4};
    vector<int>::iterator it1; //'it1' is an iterator which can point to a vector of integers.Random-Access Iterator - As 'it1' is created for container class vector
    vector<int>::reverse_iterator it2; //'it2' is a reverse iterator which can point to a vector of integers. Random-Access Iterator- As 'it2' is created for container class vector
    
    for(it1=v.begin();it1!=v.end();it1++){ // it1 Can be incremented or decremented.
        cout<<*it1<<" ";
    }cout<<endl;

    for(it1=v.end();it1!=v.begin();it1--){
        cout<<*it1<<" ";
    }cout<<endl;
	
    for(it2=v.rbegin();it2!=v.rend();it2++){ //it2 can be incremented or decremented. Reverse Iterator on increment progresses in reverse fashion.
        cout<<*it2<<" "; 
    }cout<<endl;
    
    for(it2=v.rend();it2!=v.rbegin();it2--){ // Reverse Iterator on decrement progresses in forward fashion
        cout<<*it2<<" "; 
    }cout<<endl;
    
    it1=v.begin();
    it1+=2; //Random Access - This kind of operations cannot be done for bidirectional iterators.
    cout<<*it1<<endl;
    return 0;
}