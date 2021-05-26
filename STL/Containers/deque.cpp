/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 21-05-2021

    This code demonstrates the usage of Deque Container.
*/
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
/*
    Dequeue is implemented using Vectors. Hence Deque support random access iterators.
    Deque can be used to implement stack, queue also.
    All functions applicable to vectors are also applicable to deques.
    Insertion at beginning and deletion at beginning cost you O(n) time in vectors, but in deques it can be done in constant time O(1)

    Note: Iterators for Deque. Similar to vectors.
            begin will be pointing to front(First element)
            end will be pointing to element past the back
            rbegin will be pointing to back(Last element)
            rend will be pointing to theoritical element before front()
*/
int main(){

    //DEQUE CONSTRUCTORS

    deque<int>q1;   //Default constructor.
    deque<int>q2(4,5);  // Creates a deque of 4 elements with val=5. If val is not passed, elements will be initialized with 0.
    deque<int>q3(q2.begin(),q2.end()); //Iterators of vectors can also be passed.
    //deque<int>q3(v.begin(),v.end());
    deque<int>q4(q3);   //Copy constructor.


    //DEQUE OPERATORS. 

    q1=q3; //Assgining q3 to q1.
    //assign() functions also does the same thing. q1.assign(q3)

    //<,>, <=,>=, ==. != works same as that of vectors.

    //DEQUE FUNCTIONS.
    
    //push_back(), pop_back(), push_front(), pop_front() Functions.
    q1.push_back(10);q1.push_back(25);
    q1.push_front(6);q1.push_front(4);
    q1.pop_front(); q1.pop_back();

    //Element Access Functions. [], at(), front(), back(). Similar to vectors.
    cout<<q1.front()<< " "<<q1[1]<<" "<<q1.at(4)<<" "<<q1.back()<<endl;
    for(auto i: q1)cout<<i<<" ";
    cout<<endl;

    //swap() function
    q1.swap(q2); //swaps the containers.

    //erase(), clear() functions. Similar to vectors
    q1.clear();
    q2.erase(q2.begin(),q2.begin()+3);
    q2.insert(q2.begin()+2,100);

    cout<<q1.size()<<" "<<q1.empty()<<endl;
    for(auto i: q2)cout<<i<<" ";
    cout<<endl;

    //As Deque support random access iterators, you can sort deque
    sort(q2.begin(),q2.end());
    for(auto i: q2)cout<<i<<" ";
    cout<<endl;
    return 0;
}

