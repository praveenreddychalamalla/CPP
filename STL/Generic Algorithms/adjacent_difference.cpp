#include<iostream>
#include<numeric>
using namespace std;
/*
    template<class InputIterator, class OutputIterator>
    OutputIterator adjacent_difference(InputIterator first, InputIterator last, OutputIterator result)

    computes the pair wise difference of adjacent elements and pastes at result

    template<class InputIterator, class OutputIterator,class BinaryOperation>
    OutputIterator adjacent_difference(InputIterator first, InputIterator last, OutputIterator result,BinaryOperation binary_op)

    Returns an iterator pointing to past the last element of destination sequence (result). Return type can be caught if required
    Note: First element of the container will be copied at location result initially. 
    From the container an element and its preceeding element are passed as first and second arguments respectively for the binaru function.
*/
int fun1(int x, int y){
    return x%y;
}
int fun2(int x, int y){
    return y%x;
}
int main(){
    int a[]={1,2,3,5,9,11,12};
    int out[7];

    adjacent_difference(a,a+7,out);
    for(auto i: out)cout<<i<<" ";
    cout<<endl;

    adjacent_difference(a,a+7,out,multiplies<int>());
    for(auto i: out)cout<<i<<" ";
    cout<<endl;

    adjacent_difference(a,a+7,out,plus<int>());
    for(auto i: out)cout<<i<<" ";
    cout<<endl;

    adjacent_difference(a,a+7,out,fun1);
    for(auto i: out)cout<<i<<" ";
    cout<<endl;

    adjacent_difference(a,a+7,out,fun2);
    for(auto i: out)cout<<i<<" ";
    cout<<endl;

    return 0;
}