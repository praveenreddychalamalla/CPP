#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    template<class ForwardIterator, class OutputIterator>
    OutputIterator rotate(ForwardIterator first,ForwardIterator middle, ForwardIterator last, OutputIterator result);

    //Contents between first and last will ot be modified.

    Time complexity - O(n)
*/
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    vector<int>v(10);

    rotate_copy(a,a+4,a+10,v.begin()); //Result of rotate on 'a' will be pasted at v.begin(). Array 'a' remains same.

    for(int i=0;i<10;i++)cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}