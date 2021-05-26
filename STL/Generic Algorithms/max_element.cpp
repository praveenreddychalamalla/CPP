/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 18-05-2021

    This code demonstrates the usage of max_element function.
*/
#include<iostream>
#include<algorithm>
using namespace std;
/*
    max_element() can be used with containers which support Bi-directional iterators.

    Default Syntax:
    template<class ForwardIterator>
    ForwardIterator max_element(ForwardIterator first, ForwardIterator Last)

    Custom Syntax:
    template<class ForwardIterator,class Compare>
    ForwardIterator max_element(ForwardIterator first, ForwardIterator Last, Compare comp)

    max_element() returns an iterator pointing to the maximum element in the range [first,last). The comparisions are performed using < (Default)
    or comp

*/
bool fun(int i,int j){
    return i<j; //Default comparasion only.
} 
struct MyClass{
    bool operator()(int i,int j){
        return i<j;
    }
}myobj;
// Understanding Comparator for max_element: Comparator will return Flase for every pair of elements when i=max_element in container, j= any other element 
// Understanding Comparator for min_element: Comparator will return True for every pair of elements when i=min in container, j= any other element 
int main(){
    int a[]={3,2,5,4,6,1,8,7};
    cout<<*max_element(a,a+8)<<endl;    //8
    cout<<*min_element(a,a+8)<<endl;    //1
    cout<<*max_element(a,a+8,fun)<<endl;    //8
    cout<<*min_element(a,a+8,fun)<<endl;    //1
    cout<<*max_element(a,a+8,myobj)<<endl;  //8
    cout<<*min_element(a,a+8,myobj)<<endl;  //1
    return 0;
}