#include<iostream>
#include<bits/stdc++.h>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
/*
    Unordered sets support only forward iterartors.

    unordered_multisets are same as unordered sets except that these allow different elements to have equivalent value

    Unordered sets are internally implemented using hash maps. Unordered sets store elements in no particular order. 
    In unordered sets also, if you try to insert an element which is already present, it will be ignored with no error, same as with sets(ordered)

    value of element - key - identifies uniquely. Access element - O(1).
    elements(keys) are immutable. Only insertions and deletions are entertained.
*/
using namespace std;

int main(){
    //Iterators supported - begin(), end(), cbegin(), cend()

     //Element look up functions
    /*
        find - Get iterator to element (Public member function)- Returns end() if passed key is not found
        count - Count elements with specific key (Public member function) - Useful with unordered_multisets.
       
        equal range- Returns the bounds of a range that includes all the elements in the container that compare equal to k.
        pair<iterator,iterator> equal_range ( const key_type& k ); //useful with unordered_multisets
    */


    //SET FUNCTIONS

    //Modifer functions: insert(), erase(), swap(), clear().
    unordered_set<int>s1,s2;
    s1.insert({1,2,3,1,2,3,1,1});
    s2.insert(s1.begin(),s1.end());
    for(auto i: s1)cout<<i<<" "; //Some times you may get some order, but ignore the order if any appears. It all depends on the hash values
    cout<<endl; 

    auto it=s1.find(4);
    if(it==s1.end()) cout<<"Not found!"<<endl;
    else cout<<*it<<endl;

    s1.erase(3); //Elements with key==3 will be erased.
    s1.swap(s2);
    s1.clear();
    for(auto i: s2)cout<<i<<" "; 
    cout<<endl;

     //empty(), size(), max_size() functions.
    cout<<s1.size()<<" "<<s2.size()<<endl;
    cout<<s1.empty()<<endl;

    return 0;
}