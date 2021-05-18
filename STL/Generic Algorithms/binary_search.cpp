#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*  
    template<class ForwardItertor, class T> //Two templates are present
    bool binary_search (ForwardIterator first, Forward Iterator last, const T& val);  //Elements are compared using operator <

    template<class ForwardIterator, class T, class compare> 
    bool binary_search(ForwardIterator first, ForwardIterator last, const T& val, Compare comp); //Elements are compared using comp

    For the second syntax, the elements in the range shall already be sorted according to this same criterion (operator < or comp,), or
    atleast partitioned with respect to val. comp is a binary_function 

    binary_search searches for val in the range [first,last).
*/
bool comp(int a, int b){return a>b;}
int main(){
   
     int a[]={2,3,8,1,4,6,9,5,10,7};
     vector<int>v1(a,a+10);
     vector<int>v2=v1;

     sort(a,a+10,greater<int>());  //Pointers are equivalent to random access iterators.
     sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end(),greater<int>()); //Sorts in  descending order

     for(int i=0;i<10;i++)cout<<a[i]<<" ";
     cout<<endl;
     for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
     cout<<endl;
     for(int i=0;i<v2.size();i++)cout<<v2[i]<<" ";
     cout<<endl;

     cout<<binary_search(v1.begin(),v1.end(),5)<<endl;
     cout<<binary_search(v2.begin(),v2.end(),4,comp)<<endl; //The same comparator(Compare function) must be passed that was used for sorting the container)
     cout<<binary_search(a,a+10,7,greater<int>())<<endl;
    return 0;
}