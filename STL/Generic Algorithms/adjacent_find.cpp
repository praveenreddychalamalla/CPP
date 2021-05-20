#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    template<class ForwardIterator>
    ForwardIterator adjacent_find(ForwardIterator first, Forward Iterator last);
    
    searches the range[first,last) for the first occurance  of the consecutive elements that match (==), and returns an iterator to the first
    of the two elements  or last if no such pair is found

    template<class ForwardIterator, class BinaryPredicate>
    ForwardIterator adjacent_find(ForwardIterator first, Forward Iterator last, BinaryPredicate pred);

    searches the range[first,last) for the first occurance  of the consecutive elements which results True when passed to Binary predicate,
    and returns an iterator to the first of the two elements  or last if no such pair is found
*/
bool myfun(int i,int j){
    return i==j+3;
}
int main(){
    int a[]={5,20,5,30,30,20,13,10,10,20};
    vector<int>v(a,a+8);
    vector<int>::iterator it;
    it=adjacent_find(v.begin(),v.end());
    if(it!=v.end()) cout<<*it<<endl;

    it=adjacent_find(v.begin(),v.end(),myfun);
    if(it!=v.end()) cout<<*it<<endl;
    return 0;
}