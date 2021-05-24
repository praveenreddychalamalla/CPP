#include<bits/stdc++.h>
using namespace std;
/*
    Time Complexity - O(n).
    Note: set_difference() works only on sorted ranges. Applicable to sorted containers like sets, maps, sorted arrays , sorted vectors etc.,

    template<class InputIterator1, class InputIterator2, class OutputIterator>//  2 elements are considered to be equivalent <==>(!(a<b)&&!(b<a)) 
    OutputIterator set_difference (InputIterator1 first1, InputIterator1 last1, InputIterator2 first2, InputIterator2 last2, OutputIterator result);

    template<class InputIterator1, class InputIterator2, class OutputIterator,class Compare>//  2 elements are considered to be equivalent <==>(!comp(a,b)&&!comp(b,a))
    OutputIterator set_difference (InputIterator1 first1, InputIterator1 last1, InputIterator2 first2, InputIterator2 last2, OutputIterator result, Compare comp);

    Note: compare function (Binary function)must be same as the one which is used to sort the containers

    set_difference() Constructs a sorted range beginning in the location pointed by result with the set difference of the two sorted ranges 
    [first1,last1) and [first2,last2).
*/
int main(){
    int a[]={5,10,15,20,25};
    int b[]={50,40,30,20,10};
    vector<int>v(10);
    sort(a,a+5);
    sort(b,b+5);
    auto it=set_difference(a,a+5,b,b+5,v.begin());
    v.resize(it-v.begin());
    for(auto i:v)cout<<i<<" ";
    cout<<endl;

    return 0;
}