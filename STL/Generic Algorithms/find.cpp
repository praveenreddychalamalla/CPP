#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    template <class InputIterator, class T>
    InputIterator find (InputIterator first, InputIterator last, const T& val); //Type of val should match the type of container.
    operator == is used to compare the elements by default unless you overload the operator

    find() returns an iterator pointing to the first occurance of val in the range[first, last) of the container. 
    If no such occurance is found then last is returned(Iterator pointing to past the last element of container)

    If you want the last occurance of val in the container, you can make use of reverse_iterator to get the things done
    Note: lower_bound() also can do the job of find, but it can opearate only on a sorted sequences. O(logn)
    
*/
int main()
{
    int a[]={2,3,4,1,4,6,5,5,4,7};
    vector<int>v(a,a+10);
    vector<int>::iterator it;
    vector<int>::reverse_iterator rit;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    it=find(v.begin(),v.end(),4); 
    if(it!=v.end()) cout<<"First occurance of element 4 is at pos: "<<it-v.begin()<<endl;
    else cout<<"Element 4 is not found"<<endl;

    rit=find(v.rbegin(),v.rend(),4);
    if(rit!=v.rend()) cout<<"Last occurance of element 4 is at pos: "<<v.rend()-rit-1<<endl; 
    else cout<<"Element 4 is not found"<<endl;

    sort(v.begin(),v.end()); //v becomes{1,2,3,4,4,4,5,5,6,7}

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    it=lower_bound(v.begin(),v.end(),4);
    if(it!=v.end())cout<<"First occurance of element 4 is at pos: "<<it-v.begin()<<endl;
    return 0;
} 
