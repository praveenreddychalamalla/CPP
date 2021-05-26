/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 20-05-2021

    This code demonstrates the usage of Stack Container.
*/
#include<iostream>
#include<stack>
using namespace std;
/*  
    Stacks doesn't support any kind of iterataors
    Unlike Vectors or lists, in Queue containers(Stack, Queue, Priority Queue)
    front will be pointing to end and back will be pointing to beginning.  Elements are pushed from back(beginning) and popped from front (end)
    Assuming an imaginary linear container, elements are pushed from left and popped from right
*/
template<class T>
void displayStack(stack<T>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){

    //STACK CONSTRUCTORS

    //stack(); Stacks have an empty constructor only.
    stack<int> st; 

    //STACK FUNCTIONS

    //push(), pop(), top(), empty() functions

    /*void push(const TYPE& val); Inserts element into the stack
      void pop(); Removes the top most element in the stack
      TYPE& top();Returns a reference to the top most element of the stack
      bool empty()const- Returns True if stack has no elements, False otherwise*/
    for(int i=0;i<5;i++)st.push(i+1);
    stack<int>st1=st;// st1 will be assigned st.
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;

    //swap() function

    st1.swap(st); //Containers should be of same type.
    displayStack(st1);
    //size() function

    //size_type size()const; Returns the number of elements in the stack.
    cout<<st.size()<<endl;
    return 0;
}