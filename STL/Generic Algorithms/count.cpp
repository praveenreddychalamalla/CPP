/**
  * DOCUMENTATION
  * Author: Praveen Reddy Chalamalla
  * Created on 15-05-2021 

  * This code demonstrates the usage of count function.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    template<class InputIterator, class T>
    typename iterator_traits<InputIterator>::difference_type count(InputIterator first, InputIterator last, const T& val); 
    Here the return type -you can think of it as a signed integer.

    operator == is used to compare individual elements to val and the no.of time val has occured in the range [first,last) is returned
    Note: Type of container and type of val should be same. For example you cannot count an integer in vector of pairs
*/
int main(){
    int a[]={2,3,4,1,4,6,5,5,4,7};
    vector<int>v(a,a+10);
    cout<<count(a,a+10,4)<<endl; // O(n) time
    cout<<count(v.begin(),v.end(),5)<<endl; //O(n) time

    sort(v.begin(),v.end()); // O(nlogn)
    // If the container is already sorted then count can be performed more efficiently using upper_bound() and lower_bound().

    cout<<upper_bound(v.begin(),v.end(),5)-lower_bound(v.begin(),v.end(),5); //O(logn)
    return 0;
}