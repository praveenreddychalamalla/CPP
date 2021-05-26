/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 15-05-2021

    This code demonstrates the usage of lower_bound function.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*  
    Similar to binary_search, but here the return type is an iterator

    -Returns an iterator (to lower bound) pointing to the first element in the range[first,last) which does not compare less than val(greater than or equal to)
     -If no element is greater than or equal to val, then iterator to last will be returned if container is sorted in ascending order
     (iterator to past the element of container like v.end(), v.begin() if container is sorted in descending order) 

    template<class ForwardItertor, class T> //Two templates are present
    ForwardIterator lower_bound (ForwardIterator first, Forward Iterator last, const T& val); //Elements are compared using operator <

    template<class ForwardIterator, class T, class compare>
    ForwardIterator lower_bound(ForwardIterator first, ForwardIterator last, const T& val, Compare comp); //Elements are compared using comp

*/
bool comp(int a, int b){return a>b;}
int main(){
   
     int a[]={2,3,4,1,4,6,5,5,4,7};
     vector<int>v1(a,a+10);
     vector<int>v2=v1;

     sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end(),greater<int>()); //Sorts in  descending order

     for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
     cout<<endl;
     for(int i=0;i<v2.size();i++)cout<<v2[i]<<" ";
     cout<<endl;

     vector<int>::iterator lo=lower_bound(v1.begin(),v1.end(),4);
     cout<<"Lower Bound of 4 in v1 is at pos(0 based index): "<<lo-v1.begin()<<endl;
     lo=lower_bound(v2.begin(),v2.end(),4,comp); //The same comparator(Compare function) must be passed that was used for sorting the container)
     cout<<"Lower Bound of 4 in v2 is at pos(0 based index): "<<lo-v2.begin()<<endl;

     lo =lower_bound(v1.begin(),v1.end(),13);
     cout<<"Lower Bound of 13 in v1 is at pos(0 based index): "<<lo-v1.begin()<<endl;
     lo=lower_bound(v2.begin(),v2.end(),13,comp); //The same comparator(Compare function) must be passed that was used for sorting the container)
     cout<<"Lower Bound of 13 in v2 is at pos(0 based index): "<<lo-v2.begin()<<endl;
    return 0;
}