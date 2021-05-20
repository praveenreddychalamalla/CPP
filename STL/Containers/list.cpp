#include<iostream>
#include<list>
using namespace std;
/*
    Lists will have Bi-directional iterators 
    Lists don't suppport random access iterators.
    Hence we cannot perform arithmetic like it+k or it-k on iterators to lists. You should not use sth like list[5].
    Lists are sequences of elements stored in a linked list.
    Compared to vectors, they allow fast insertions and deletions, but doesn't support random access
*/
void displayList(const list<int>& l){
    for(auto it=l.begin();it!=l.end();it++) cout<<*it<<" ";
    cout<<endl;
}
int main(){

    //LIST CONSTRUCTORS

    //list()
    list<int>l1; //Default list constructor takes no arguments, creates a new instance of that list
    
    //list(const list& c)
    //Default copy constructor that can be used to create a new list that is copy of the given list c.

    list<int>l2(l1); //Creates a vector v2 which is a copy of vector v1

    //list(size_type num, const TYPE& value=Type())
    //Creates a list with space for num objects. If val is specified, each of those objects will be given that value.

    list<int>l3(5,1); //Creates a list l3 of size 5 and each element of l3 will be 1.
    list<int>l4(5);  //Creates a list l3 of size 5 and each element of l3 will be some garbage value
   
    /*list(input_iterator start, input_iterator end)
      list<int>l(it1,it2); //Creates a list with elements between it1 and it2 */


    //LIST OPERATORS (Already overloaded in the list class) 

    /*All of the C++ containers can be compared and assigned with standard comparision operators: ==, !=, <=, >=, <, >, =.

      Comparision(<, >, <=,, >=) among lists are done lexicographically, with bool return type*/

    list<int>l5{1,2,3};
    list<int>l6{7,8,9,10};

    cout<<(l5==l6)<<endl;   //False. Lists are equal <==> Their sizes are same and elements in each corresponding location are same.
    cout<<(l5>l6)<<endl;    //False. Behaves similar to that of string comp in C
    cout<<(l5<=l6)<<endl;   //True.


    //LIST FUNCTIONS

    //push_back() & pop_back() functions

    //void push_back(const TYPE& val), void pop_back()
    l5.push_back(4); //appends 4 to the last of list l5
    l5.push_back(5);
    l5.pop_back(); //Removes the last element

    //push_front() & pop_front() functions
    
    //void push_front(const TYPE& val), void pop_front()
    l5.push_front(1); //appends 1 to the start of list l5
    l5.pop_front(); //Removes the starting element of list l5

    // front() & back() functions

    // TYPE& front()- Returns reference to the first element of a list. Similarly back() function returns reference to the last element
    int a=l6.front(); //a will be a reference to first element of list l6
    int b=l6.back();  //b will be a reference to last element of list l6
    cout<<l6.front()<<endl;
    cout<<a<<" "<<b<<" "<<endl;

    //begin() & end() functions

    //iterator begin()- Returns an iterator pointing to the first element of list.
    //***iterator end()- Returns an iterator pointing to past the last element of list***
    list<int>::iterator it; // Now 'it' is an iterator that can point to a list with elements of int data type. Bidirectional iterator.
    // Iterator can point to any element of any container, hence resolve the scope. 
    // You can use auto instead.
    for(it=l6.begin();it!=l6.end();it++){   
        cout<<*it<<" ";
    }cout<<endl;

    // rbegin() & rend() functions

    // reverse_iterator rbegin()- Returns a reverse iterator pointing to the last element of list. 
    //*** reverse iterator rend()- Returns a reverse iterator pointing to the theoretical element preceding the first element in the list***
    for(auto it=l6.rbegin();it!=l6.rend();it++){  //Using auto instead of resolving scope for iterator explicitly
        cout<<*it<<" "; //Incrementing a reverse_iterator progresses in reverse fashion
    }cout<<endl;

    //insert() function

    /*iterator insert(iterator loc, const TYPE& val)- Inserts val before loc and returns an iterator pointing to element inserted.
      void insert(iterator loc, size_type num, const TYPE& val)- Inserts num copies of val before loc.
      void insert(iterator loc, iterator start, iterator end)- Inserts the elements from start to end before loc*/
    l5.insert(l5.begin(),5);  //Inserts 5 at the beginning of list
    l5.insert(l5.end(),3,6);    //Inserts 3 copies of 6 at the end of list 
    l5.insert(l5.end(),l6.begin(),l6.end());  //Inserts all the elements of l6 at the end of l5
    displayList(l5);

    //size() ,resize() & max_size() functions.

    /* size_type size() const - Returns the no.of elements present in the List(Container)
       void resize(size_type num,const TYPE& val=TYPE()) - Resizes the List(Container), so that only first num elements will be present
       size_type max_size() const - Returns maximum number of elements that a List (Container) can hold */
    cout<<l5.size()<<endl;
    l5.resize(6);
    cout<<l5.size()<<endl;
    displayList(l5);
    cout<<"Maximum number of elements that can be present in List = "<<l1.max_size()<<endl; //Machine Dependent

    // swap() function - Operates in constant time . O(1) time for any container becuase internally iterators will be swapped ):-

    //void swap(container& from) - exchanges the elements of current vector with those of from
    l3.swap(l5);
    displayList(l5);

    // assign() function 

    /*  void assign(size_type num, const TYPE& val) - 
        void assign(input_iterator start, input_iterator end);
        The assign() function either gives the current list the values form start to end or gives it num copies of val.
    */
    l5.assign(3,4);// l5={4,4,4}
    displayList(l5);

    //clear(), erase() & empty() functions

    /*void clear()- Deletes all the elements of a list. Frees the memory also.
      bool empty()const- Returns True if list has no elements, False otherwise
      iterator erase(iterator loc)- Deletes element at location loc
      iterator erase(iterator start, iterator end)- Deletes elements from start to end (start location is inclusive while end location is exclusive)*/ 
    l5.clear();
    cout<<l5.empty()<<endl;
    l6.erase(l6.begin()); //Iterator pointing to element which has to be deleted should be passed.

    displayList(l6);

    l6.erase(l6.begin(),l6.end());
    
    return 0;
}
