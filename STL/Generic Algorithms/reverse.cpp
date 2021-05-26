/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 17-05-2021

    This code demonstrates the usage of reverse function.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    template <class BidirectionalIterator> 
    void reverse (BidirectionalIterator first, Bidirectional Iterator last);

    Reverses the elements of a container between the range [first, last)
    reverse() calls the function iter_swap internally( n/2 times) to swap the elements to their new locations 
*/
int main(){
    vector <int>v;
    for(int i=0;i<10;i++)v.push_back(i+1);

    reverse(v.begin(),v.end()); //Contents of V will be reversed
    
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}