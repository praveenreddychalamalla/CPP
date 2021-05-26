/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 16-05-2021

    This code demonstrates the usage of unique_copy function.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    unique_copy() does not operate in place manner. 
    Takes a Location where the elements have to be reflected after applying unique(), without modifying the passed container.

    unique_copy() works same as that of unique
    unique_copy() with BinaryPredicate works same as that of unique with BinaryPredicate
*/
int main(){
    int a[]={1,2,2,2,3,3,2,2,1};
    vector<int>v(9);

    vector<int>::iterator it;

    it=unique_copy(a,a+9,v.begin());  //Contents of array 'a' will not be modified. 
    //Result of unique operation on array 'a' will be pasted at location v.begin()
    v.resize(it-v.begin());
    
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    for(int i=0;i<9;i++)cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}