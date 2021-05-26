/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 16-05-2021

    This code demonstrates the usage of unique function with predicate.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    Opeartes with a Binary Predicate

    template <class ForwardIterator, class BinaryPredicate pred> 
    ForwardIterator unique(ForwardIterator first, ForwardIterator Last, BinaryPredicate pred);
    Predicate  is True ==> Remove.

    Binary predicate can be any function which takes 2 arguments of same type as that of container holding and returns a type convertible to bool. 
    Similar to comparator(sort) in some sense.

    Remove consecutive duplicates in range. Removes all but the first element from every consecutive group of elements in the range [first,last)
    
    The function does not alter the properties of the object containing the range of elements (i.e., it cannot alter the size of an array or a container)
    The removal is done by replacing the duplicate elements by the next element  that is not a duplicate, and signaling the new size of the
    shortened range by returning an iterator to the element that should be considered its new past-the-end element.

    The relative order of the elements not removed is preserved, while the elements between the returned iterator and last
    are left in a valid but unspecified state.

*/
bool fun(int i, int j){
    return i<=j;
}
int main(){
    int a[]={1,2,2,2,0,3,3,2,2,1,0};
    vector<int>v(a,a+10);
    vector<int>::iterator it;

    //Preserve the first element, proceed left to right. Predicate  is True ==> Remove.
    it=unique(v.begin(),v.end(),fun); //Its your responsibilty to resize the container if you have to.
    v.resize(it-v.begin());

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}