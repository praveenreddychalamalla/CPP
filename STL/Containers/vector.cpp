/**
  * DOCUMENTATION
  * Author: Praveen Reddy Chalamalla
  * Created on 14-05-2021 

  * This code demonstrates the usage of Vector Container.
*/
#include<iostream>
#include<vector>
using namespace std;
/*
    Vector is a class template. Vector contains elements stored as an array
    Accessing member - O(1), append element - O(1), search specific element - O(n), insertion - O(n)
*/
void displayVector(const vector<int>& v){
  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
  cout<<endl;
}
int main()
{
    //VECTOR CONSTRUCTORS
    

    //vector()
    vector<int>v1; //Default vector constructor takes no arguments, creates a new instance of that vector
    
    //vector(const vector& c)
    //Default copy constructor that can be used to create a new vector that is copy of the given vector c.

    vector<int>v2(v1); //Creates a vector v2 which is a copy of vector v1

    //vector(size_type num, const TYPE& value=Type())
    //Creates a vector with space for num objects. If val is specified, each of those objects will be given that value.

    vector<int>v3(5,1); //Creates a vector v3 of size 5 and each element of v3 will be 1.
	
    int n=1000;
	  vector<vector<int>> arr(n, vector<int> (n,0)); // arr is Vector of vectors, where each vector is initialized with zeroes having size as n. It is equivalent to n x n 2D Array initialized with zeroes.
	
    vector<int>v4(5);  //Creates a vector v3 of size 5 and each element of v3 will be some garbage value
   
    /*vector(input_iterator start, input_iterator end)
      vector<int>v(it1,it2); //Creates a vector with elements between it1 and it2 */


    //VECTOR OPERATORS (Already overloaded in the vector class)

    /*All of the C++ containers can be compared and assigned with standard comparision operators: ==, !=, <=, >=, <, >, =.

      Comparision(<, >, <=,, >=) among vectors are done lexicographically, with bool return type
      Individual elements of a vector can be accessed with [] operator (Similar to arrays)*/

    vector<int>v5{1,2,3};
    vector<int>v6{7,8,9,10};

    cout<<(v5==v6)<<endl;   //False. vectors are equal <==> Their sizes are same and elements in each corresponding location are same.
    cout<<(v5>v6)<<endl;    //False. Behaves similar to that of string comp in C
    cout<<(v5<=v6)<<endl;   //True.


    //VECTOR FUNCTIONS

    // at() function
    for(int i=0;i<4;i++){
        cout<<v6.at(i)<<" "; //at function is similar to [], but at() is safer because it won't let you go out of bounds, throws an error if you do so
    }cout<<endl;

    //push_back() & pop_back() functions

    //void push_back(const TYPE& val), void pop_back()
    v5.push_back(4); //appends 4 to vector v5
    v5.push_back(5);
    v5.pop_back(); //Removes the last element

    // front() & back() functions

    // TYPE& front()- Returns reference to the first location. Similarly back() function
    int a=v6.front(); //a will be a reference to first element of vector v6
    int b=v6.back();  //b will be a reference to last element of vector v6
    cout<<v6.front()<<endl;
    cout<<a<<" "<<b<<" "<<endl;

    //begin() & end() functions

    //iterator begin()- Returns an iterator pointing to the first element of vector.
    //***iterator end()- Returns an iterator pointing to past the last element of vector***
    vector<int>::iterator it; // Now 'it' is an iterator that can point to a vector with int data type
    // Iterator can point to any element of any container, hence resolve the scope. 
    // You can use auto instead.
    for(it=v6.begin();it!=v6.end();it++){   //Bidirectional iterator.
        cout<<*it<<" ";
    }cout<<endl;

    // rbegin() & rend() functions

    // reverse_iterator rbegin()- Returns a reverse iterator pointing to the last element of vector. 
    //*** reverse iterator rend()- Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector***
    for(auto it=v6.rbegin();it!=v6.rend();it++){  //Using auto instead of resolving scope for iterator explicitly
        cout<<*it<<" "; //Incrementing a reverse_iterator progresses in reverse fashion
    }cout<<endl;

    //insert() function

    /*iterator insert(iterator loc, const TYPE& val)- Inserts val before loc and returns an iterator pointing to element inserted.
      void insert(iterator loc, size_type num, const TYPE& val)- Inserts num copies of val before loc.
      void insert(iterator loc, iterator start, iterator end)- Inserts the elements from start to end before loc*/
    v5.insert(v5.begin(),5);  //Inserts 5 at the beginning of vector
    v5.insert(v5.end(),3,6);    //Inserts 3 copies of 6 at the end vector
    v5.insert(v5.end(),v6.begin(),v6.end());  //Inserts all the elements of v6 at the end of v5
    displayVector(v5);

    //size() ,resize() & max_size() functions.

    /* size_type size() const - Returns the no.of elements present in the vector(Container)
       void resize(size_type num,const TYPE& val=TYPE()) - Resizes the vector(Container), so that only first num elements will be present
       size_type max_size() const - Returns maximum number of elements that a vector (Container) can hold */
    cout<<v5.size()<<endl;
    v5.resize(6);
    cout<<v5.size()<<endl;
    displayVector(v5);
    cout<<"Maximum number of elements that can be present in vector = "<<v1.max_size()<<endl; //Machine Dependent

    //capacity() & reserve() functions
    
    /*size_type capacity() const - Returns the no. of elements that it can hold at an instance (Before it will need to allocate more space)
    void reserve(size_type size) - Sets the capacity of vector to atleast size*/
    cout<<"V5 can hold "<<v5.capacity()<<" elements now, before allocating more space"<<endl;
    v5.reserve(10000);// Sets the capacity of v1 so that it can hold upto 100000 elements before allocating more space.
    cout<<"V5 can hold "<<v5.capacity()<<" elements now, before allocating more space"<<endl;
    
    // swap() function - Operates in constant time . O(1) time for any container becuase internally iterators will be swapped):- 

    //void swap(container& from) - exchanges the elements of current vector with those of from
    v3.swap(v5);
    displayVector(v5);

    // assign() function ( Not much important)

    /*  vector<int> v;
        v.assign(3,4); Works same as vector<int>v(3,4); 
        But assign can be used at anytime*/

    //clear(), erase() & empty() functions

    /*void clear()- Deletes all the elements of a vector
      bool empty()const- Returns True if vector has no elements, False otherwise
      iterator erase(iterator loc)- Deletes element at location loc
      iterator erase(iterator start, iterator end)- Deletes elements from start to end (start location is inclusive while end location is exclusive)*/ 
    v5.clear();// Indirectly v5 becomes empty. Unfortunately contents will still be present and you can access them with [] operator. Similar to Queue - Circular array implementation
    cout<<v5.empty()<<endl; 
    v6.erase(v6.begin()+2); //erases v6[2]
    cout<<v6[0]<<" "<<v6[1]<<" "<<v6[2]<<endl;
    v6.erase(v6.begin(),v6.begin()+2); //erases v6[0],v6[1];
    cout<<v6[0]<<endl;

    return 0;
}
 
