#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/* Generic Algorithms - Created on iterators (Random Access iterators), 
   Any container which support random access iterators can make use of generic algorithms.

   template<class RandomAccessIterator>
   void sort (RandomAccessIterator first,RandomAccessIterator last) ; Elements are compared using < operator

   template<class RandomAccessIterator, class Compare>
   void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp ) ; Elements are compared using comp
   comp must be a Binary function that accepts two elements in the range as arguments, and returns a value convertible to bool
    
   Note: Sort() sorts the elements in the range [first,last) but not [first,last]
   You can pass pointers also instead of iterators (But should be passed in a meaning full way), hence sort() can be used to sort arrays as well
   Equivalent elements are not guaranteed to keep their original relative order.
*/

bool comp(int a, int b){
    return a>b;
}
int main(){
    int a[]={3,7,8,4,1,2,6,5,10,9};
    vector<int>v(a,a+10);

    sort(v.begin(),v.begin()+5); //Sorts first 5 elements in v.
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    sort(v.begin(),v.end()); //Sorts the entire vector in ascending order
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    sort(v.begin(),v.end(),comp); //Sorts the entire vector as per comp function
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    //Usage of greater<> class template instead of comp
    sort(a,a+10,greater<int>());  //Seems like function but greater is an object ):-   
    //Actually function call () operator is overloaded in greater class template.
    for(int i=0;i<10;i++)cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
/*greater<> class template
    It is a binary function object, whose call returns whether the first argument compares greater than the second(As returned by >)
    Function objects are instances of a class with member function- operator() defined.

    template <class T> struct greater: binary_function<T,T, bool> //Inherits a class named binary_function
    bool operator()(const T& x, const T& y) const{
        return x>y;
    }
*/