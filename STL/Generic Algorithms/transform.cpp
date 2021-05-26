/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 17-05-2021

    This code demonstrates the usage of transform function.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/* 
    template<class InputIterator,class OutputIterator, class UnaryOperation>
    OutputIterator transform(InputIterator first, InputIterator last, OutputIterator result, UnaryOperation op);

    transform() applies the unary operation sequentially to the elements of the container in the range [first,Last) 
    and stores the result in the range that begins at result.

    template<class InputIterator1 class InputIterator2,class OutputIterator, class BinaryOperation>
    OutputIterator transform(InputIterator1 first1, InputIterator1 last1,InputIterator2 first2, OutputIterator result, BinaryOperation binary_op);

    In case of transform() with binary opertion, each time 2 elements are drawn ----- 1 from first1, 1 from first2 and the result of binary operation 
    on them is pasted at result and iterators are incremented.

    Output iterator is returned pointing to the element that follows the  last element written in the result sequence.
    Most of the time we don't require to catch the returned Output iterator

    Neither op nor binary_op should modify the arguments of the conatiners passed directly.
*/
int fun1(int i){ //call by value - you can modify 'i'
    return i*2;
}
int fun2(int i, int j){
    return i+j;
}
int main(){
    vector<int> v1,v2;
    for(int i=0;i<10;i++) v1.push_back(i+1);

    for(auto it=v1.begin();it!=v1.end();it++) cout<<*it<<" "; //v1={1,2,3,4,5,6,7,8,8,10}
    cout<<endl;

    v2.resize(v1.size()); //v2 will be resized so that it can hold the elements equal to v1.size()

    transform(v1.begin(),v1.end(),v2.begin(),fun1);

    for(auto it=v2.begin();it!=v2.end();it++) cout<<*it<<" ";
    cout<<endl;

    //instead of fun2-  plus<int>() can be used.
    transform(v1.begin(),v1.end(),v2.begin(),v1.begin(),fun2);//Result location is being passed as v1.begin()

    for(auto it=v1.begin();it!=v1.end();it++) cout<<*it<<" ";
    cout<<endl;
    return 0;
}