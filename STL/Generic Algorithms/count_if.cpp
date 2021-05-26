/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 15-05-2021

    This code demonstrates the usage of count function.
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
/*
    Opeartes with a Unary Predicate

    template<class InputIterator, class UnaryPredicate>
    typename iterator_traits <InputIterator>::difference_type count_if (InputIterator first, InputIterator last, UnaryPredicate pred); 
    Here the return type -you can think of it as a signed integer.

    count_if counts the no.of elements in the container satisfying the passed unary predicate.
    Unary predicate can be any function which takes 1 argument and returns a type convertible to bool
*/
bool IsEven(int i){return i%2==0;}
bool IsPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i<=ceil(sqrt(n));i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int a[]={2,3,91,1,4,6,5,5,4,7,61};
    vector<int>v(a,a+11);
    cout<<count_if(a,a+11,IsEven)<<endl; // O(n) time
    cout<<count_if(v.begin(),v.end(),IsPrime)<<endl; //O(n) time

    return 0;
}