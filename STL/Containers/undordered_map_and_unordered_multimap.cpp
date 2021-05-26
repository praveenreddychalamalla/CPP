/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 24-05-2021

    This code demonstrates the usage of Unordered Map and Unordered Multimap Containers.
**/
#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define pi pair<int,int>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
/*
    Unordered maps are internally implemented with Hash Maps. Any Operation - O(1) Avg Time Complexity

    Unordered maps doesn't support upper_bound, lower_bound as they are not sorted.

    Unordered Maps support only forward iterartors.
    
    In Unordered Maps we don't have any notion of comparator
*/
template<class T1, class T2>
void display(unordered_map<T1,T2>& m){
    for(auto e: m)cout<<"("<<e.F<<":"<<e.S<<")"<<"\t";
    cout<<endl;
}
template<class T1, class T2>
void display(unordered_multimap<T1,T2>& m){
    for(auto e: m)cout<<"("<<e.F<<":"<<e.S<<")"<<"\t";
    cout<<endl;
}
int main(){
    //Iterators Supported: begin, end, cbegin, cend

    //UNORDERED_MAP FUNCTIONS

    //Modifer functions: insert(), erase(), swap(), clear().
    unordered_map<char,int>m1,m2;
    m1['a']=1; //If  key exists, it's value is updated else a new key will be created automatically and value will assigned.
    m1['a']=3; // Key value is updated.
    m1['x']=5;m1['z']=0;;m1['d']=2;

    //Insertion using pairs is allowed
    m1.insert({'b',4}); m1.insert(mp('c',10));
    m1.insert({'a',1}); // As key with value 'a' is already present this line will be ignored.
    m2=m1; //Default copying. Copy constructor

    m1.erase('b');
    display(m1);

    m1.clear();
    cout<<m1.size()<<" "<<m1.empty()<<endl;  //empty(), size(), max_size() functions
    m1.swap(m2);

    display(m1);
    /*NOTE: While referring a key with [] operator as m[k] - If k does not match the key of any element in the container, 
    the function inserts a new element with that key and returns a reference to its mapped value (default value depending on data type). 
    Notice that this always increases the container size by one, even if no mapped value is assigned to the element 
    (the element is constructed using its default constructor).*/
    cout<<m1['g']<<" "<<m1['q']<<" "<<m1['s']<<endl; 

    display(m1);

    //UNORDERED_MAP OPERATIONS - find, count(Useful for Unordered multimaps)

    if(m1.find('o')!=m1.end())cout<<"Key found!"<<endl;
    else cout<<"Key not found!"<<endl;

    
    // UNORDERED_MULTIMAPS
    cout<<endl<<"Unordered Multi Maps"<<endl;
    unordered_multimap<char,int>m4; //You can't use [] operator and at function with multi maps
    m4.insert({'a',1});
    m4.insert({'a',3});
    m4.insert({'b',1});
    m4.insert({'c',3});
    display(m4);

    cout<<m4.count('a')<<endl;
    auto it1=m4.equal_range('a'); //equal_range returns pair<iterator,iterator>
    for(auto it=it1.F;it!=it1.S;it++){
        cout<<"("<<it->F<<":"<<it->S<<")"<<"\t";
    }cout<<endl;
    
    m4.erase('a');
    display(m4);
    return 0;
}