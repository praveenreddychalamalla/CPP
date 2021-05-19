#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    template<class ForwardIterator>
    void rotate(ForwardIterator first,ForwardIterator middle, ForwardIterator last);

    rotate()- Rotates the order of the elements in the range [first,last)  [Performs circular rotation on container]
    in such a way that the element pointed by middle becomes the new first element.

    Time complexity - O(n)
*/
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<10;i++)cout<<a[i]<<" ";
    cout<<endl;

    rotate(a,a+4,a+10);

    for(int i=0;i<10;i++)cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}