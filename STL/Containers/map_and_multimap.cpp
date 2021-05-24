#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define pi pair<int,int>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
/*
    Keys of a map are immutable but the values assigned to a key are mutable.

    Maps are internally implemented as BST. Hence keys in a map are sorted by default in ascending order, custom order if comparator is passed.
    As elements of a map are sorted allow direct iteration on their subsets based on range while unordered maps doesn't allow it.
    
    In Maps any operation takes O(log n) as they are implemented with BST's . In unordered Maps it is O(1)

    Note: Function pointer will not work for comparator in maps. Comparator has to be of type class in which () operator is overloaded
    Similar to sets and priority queues with comparators.

    Note: MultiMaps are same as Maps except that these allow multiple elements to contain same key value. 
          Multimaps doesn't support at()function and  [] access.

*/
class comp{
    public:
    bool operator ()(char a,char b){  //Logic should be based on keys
        return a>b;
    }
};

template<class T1, class T2>
void display(map<T1,T2>& m){
    for(auto e: m)cout<<"("<<e.F<<":"<<e.S<<")"<<"\t";
    cout<<endl;
}

template<class T1, class T2>
void display(map<T1,T2,comp>& m){
    for(auto e: m)cout<<"("<<e.F<<":"<<e.S<<")"<<"\t";
    cout<<endl;
}
template<class T1, class T2>
void display(multimap<T1,T2>& m){
    for(auto e: m)cout<<"("<<e.F<<":"<<e.S<<")"<<"\t";
    cout<<endl;
}
int main(){
    //Iterators Supported: begin, end, rbegin, rend, cbegin, cend, crbegin, crend

    //MAP FUNCTIONS

    //Modifer functions: insert(), erase(), swap(), clear().
    map<char,int>m1,m2;
    m1['a']=1; //If  key exists, it's value is updated else a new key will be created automatically and value will assigned.
    m1['a']=3; // Key value is updated.
    m1['x']=5;m1['z']=0;;m1['d']=2;

    //Insertion using pairs is allowed
    m1.insert({'b',4}); m1.insert(mp('c',10));
    m1.insert({'a',1}); // As key with value 'a' is already present this line will be ignored.
    m2=m1; //Default copying. Copy constructor

    m1.erase('b');
    display(m1);

    m1.clear();
    cout<<m1.size()<<" "<<m1.empty()<<endl;  //empty(), size(), max_size() functions
    m1.swap(m2);

    display(m1);
    /*NOTE: While referring a key with [] operator as m[k] - If k does not match the key of any element in the container, 
    the function inserts a new element with that key and returns a reference to its mapped value (default value depending on data type). 
    Notice that this always increases the container size by one, even if no mapped value is assigned to the element 
    (the element is constructed using its default constructor).*/
    cout<<m1['g']<<" "<<m1['q']<<" "<<m1['s']<<endl; 
    cout<<m1.size()<<endl;
    display(m1);

    //MAP OPERATIONS - find, count(Useful for multimaps), lower_bound, upper_bound

    if(m1.find('o')!=m1.end())cout<<"Key found!"<<endl;
    else cout<<"Key not found!"<<endl;

    for(auto it=m1.lower_bound('b');it!=m1.upper_bound('x');it++)
        cout<<"("<<it->F<<":"<<it->S<<")"<<"\t";
    cout<<endl;

    //MAP with Comparator
    cout<<endl<<"Map With Comparator"<<endl;

    map<char,int,comp>m3; //Comparator function -Comparision is done based on keys, hence keys will be passed as arguments.
    m3.insert(m1.begin(),m1.end());
    display(m3);

    //MultiMaps
    cout<<endl<<"Multi Maps"<<endl;
    multimap<char,int>m4; //You can't use [] operator and at function with multi maps
    m4.insert({'a',1});
    m4.insert({'a',3});
    m4.insert({'b',1});
    m4.insert({'c',3});
    display(m4);

    auto it1=m4.equal_range('a'); //equal_range returns pair<iterator,iterator>
    for(auto it=it1.F;it!=it1.S;it++){
        cout<<"("<<it->F<<":"<<it->S<<")"<<"\t";
    }cout<<endl;
    
    m4.erase('a');
    display(m4);
    return 0;
}