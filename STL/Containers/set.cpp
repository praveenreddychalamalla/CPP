/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 23-05-2021

    This code demonstrates the usage of Set Container.
*/
#include<iostream>
#include<set>
#define F first
#define S second
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
#define FOR for(int i=(a);i<(b);i++)
using namespace std;
/*
    Sets support Bi-directional iterators
    Sets are containers that store unique elements following a specific order. Sets and multisets are ordered sets i.e., {1,2,3}!={3,2,1}
    Internally sets are implemented as binary search trees and the elements in as set are always sorted following a specific strict weak ordering

    In a set, the value of an element also identifies it(the value is itself the key, of type T), and each value must be unique.

    Sets are immutable - The value of the elements in a set cannot be modified(The elemets are always constant),
    but they can be inserted or removed from the container

    In sets access of individual element using val(Key)- O(log n). In unordered sets it is O(1)

    template<class T, class Compare=less<T>> class set; 
    By deafult elements are compared with < operator, elements with larger value has higher priority. 
    But stored in ascending order in memory (Default comparision operator <), if popped comes out in descending order similar to max heap

    Note: multiset is same as set except that it allows duplicates
    Elements in a set cannot be identified with indices or at() function, use value of element to access.
*/

/**
  * Warning: If you want to use the upper_bound or lower_bound funtion for a set, 
  * then use the public member functions upper_bound and lower_bound of set. USE set.upper_bound(ele) or set.lower_bound(ele)
  * These member functions works more efficiently than generic algorithms.
  * Don't use the  upper_bound and lower_bound functions (Generic Algorithms) in std namespace. 
  * DON'T USE upper_bound(set.begin(),set.end(),ele), lower_bound(set.begin(),set.end(),ele). If used, you might stuck in TLE scenario
*/
class comp{
    public:
    // bool operator ()(pi& a, pi& b) resulting in error.
    bool operator () (const pi& a,const pi& b){
        return a.S<b.S;  //Note: For sets, the parameters has to be declared as const in comparator class.
    }
};
int main(){
    //Iterators supported for sets: begin(), end(), rbegin(), rend(), cbegin(), cend(), crbegin(), crend()

    //SET OPERATIONS
    /*
        find - Get iterator to element (Public member function) - Returns end() if passed element is not found
        count - Count elements with specific value (Public member function) - Useful for Multisets.
        lower_bound - Return an iterator to lower bound (Public member function)
        uppper_bound - Return an iterator to upper bound (Public member functio)
    */

   

    //SET FUNCTIONS

    //Modifer functions: insert(), erase(), swap(), clear().

    set<int>s1,s2{1,3,8,4,2}; //Default constructor
    s1.insert(9);s1.insert(17);
    s1.insert(6);s1.insert(8);
    s1.insert(4);
    s1.insert(5);
    s1.insert(4);// As 4 is already present in s1, again 4 is not inserted, as s1 is not a multiset. No error is generated as well.

    s2=s1; //Copy constructor.  s1=s2={4,6,8,9,17}
    s1.erase(5); //For erase function it is not necessary to pass the iterator, we can also pass the value of element that has to be deleted.
    
    for(auto i: s1)cout<<i<<" ";
    cout<<endl;

    set<int>::iterator it1=s1.find(6),it2=s1.find(9);
    s1.erase(it1,it2);  //erases in the range [first,last)

    for(auto i: s1)cout<<i<<" ";
    cout<<endl;

    //empty(), size(), max_size() functions.
    cout<<s1.size()<<endl;
    s1.clear();
    cout<<s1.empty()<<endl;

    set<pi>s3;
    s3.insert({1,2});
    s3.insert({0,0});
    s3.insert({0,5});
    s3.insert({1,3});
    s3.insert({5,1});
    for(auto e:s3)cout<<"("<<e.F<<","<<e.S<<")"<<'\t';
    cout<<endl;
    

    //SET with Comparator

    //Unlike vectors sets have a restriction that the comparator has to be of type class in which operator () is overloaded . 
    //Similar to that of priority queues
    set<pi,comp>s4; //Sets expect the comparator to be of type class i.e, object or instance of a class 
    //In s4, elements will be arranged in ascending order as per second value of pairs.
    s4.insert(s3.begin(),s3.end());

    for(auto e:s4)cout<<"("<<e.F<<","<<e.S<<")"<<'\t';
    cout<<endl;
    return 0;
}