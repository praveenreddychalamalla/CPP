/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 16-05-2021

    This code demonstrates the usage of unique function.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    template <class ForwardIterator> 
    ForwardIterator unique(ForwardIterator first, ForwardIterator Last); //Default predicate used is x==y
    Predicate  is True ==> Remove.

    Remove consecutive duplicates in range. Removes all but the first element from every consecutive group of elements in the range [first,last)
    
    The function does not alter the properties of the object containing the range of elements (i.e., it cannot alter the size of an array or a container)
    The removal is done by replacing the duplicate elements by the next element  that is not a duplicate, and signaling the new size of the
    shortened range by returning an iterator to the element that should be considered its new past-the-end element.

    The relative order of the elements not removed is preserved, while the elements between the returned iterator and last
    are left in a valid but unspecified state.

*/
int main(){
    int a[]={1,1,5,1,4,5,5,5,4,7};
    vector<int>v1(a,a+10);
    vector<int>v2=v1;
    vector<int>::iterator it;

    it=unique(v1.begin(),v1.end()); //Its your responsibilty to resize the container if you want.

    for(auto it1=v1.begin();it1!=it;it1++)cout<<*it1<<" ";
    cout<<endl; 

    for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
    cout<<endl;

    //v1.erase(it,v1.end()); also does the job.
    v1.resize(it-v1.begin()); // Erasing the locations of container with unspecified state .
    for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
    cout<<endl;

    sort(v2.begin(),v2.end());
    it=unique(v2.begin(),v2.end()); //Unique is very handy for already sorted sequences.
    v2.resize(it-v2.begin());

    for(int i=0;i<v2.size();i++)cout<<v2[i]<<" ";
    cout<<endl;


    cout<<endl;
    return 0;
}