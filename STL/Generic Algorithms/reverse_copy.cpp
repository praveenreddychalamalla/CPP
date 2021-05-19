#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    reverse_copy() does not operate in place manner. 
    Takes a Location where the elements have to be reflected after reversing, without modifying the passed container

    template <class BidirectionalIterator, class OutputIterator> 
    OutputIterator reverse_copy(BidirectionalIterator first, Bidirectional Iterator last, OutputIterator result);

    Output iterator is returned pointing to the end of the copied range, which contains the same elements in reverse order. 
    Most of the time we don't require to catch the returned Output iterator .

*/
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    vector<int> v(10);
    
    //The container should have enough size to accommodate the resulted output else you may loose the data.
    reverse_copy(a,a+10,v.begin()); //Contents of array 'a' will not be altered. Result of reverse operation on 'a' is pasted at v.begin()

    for(int i=0;i<10;i++)cout<<a[i]<<" ";
    cout<<endl;

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}