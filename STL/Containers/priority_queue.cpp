/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 20-05-2021

    This code demonstrates the usage of Priority_Queue Container.
*/
#include<iostream>
#include<queue>
using namespace std;
/*  
    Note: Iterators cannot be created for priority queues. Queues & Stacks doesn't support any kind of iterators. Dequeue suppport iteratos.

    Unlike Vectors or lists, in Queue containers(Stack, Queue, Priority) 
    front will be pointing to end and back will be pointing to beginning.  Elements are pushed from back(beginning) and popped from front (end)
    Assuming an imaginary linear container, elements are pushed from left and popped from right
    Priority queues are internally implemented as heaps.

    Note: If 2 elements have same priority then use FCFS
*/
class Compare1{
    public:
        bool operator ()(int a , int b){
            return a>b;  //Smaller value has higher priority - Min Heap
            //Default priority.... a<b.....Max Heap 
        }
};
class Compare2{
    public:
        bool operator ()(int a , int b){
            return a%3>b%3;  //Elements which have lesser value of modulo 3 will have higher priority.
        }
};
template<class T>
void displayQueue(priority_queue<T> q){
  while(!q.empty()){
    cout<<q.top()<<" ";
    q.pop();
  }
  cout<<endl;
}
template<class T,class Comparator>
void displayQueue( priority_queue<T,vector<T>,Comparator> q){
  while(!q.empty()){
    cout<<q.top()<<" ";
    q.pop();
  }
  cout<<endl;
}
int main(){
    priority_queue<int> pq1; //Default Priority = ELement with larger value has high priority. Max heap will be implemented

    //PRIORITY  QUEUE FUNCTIONS
    
    //push(), pop(), top(), empty() functions

    /*void push(const TYPE& val); Inserts element in the priority queue - O(logn)
      void pop(); Removes the top most element (@front) in the priority queue - O(logn)
      TYPE& top();Returns a reference to the top most element (@front) in the priority queue - O(1)
      bool empty()const- Returns True if priority queue has no elements, False otherwise*/
    pq1.push(10);pq1.push(5);pq1.push(15);pq1.push(12);
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }cout<<endl;

    //size() function

    //size_type size()const; Returns the number of elements in the priority queue. Mostly we don't use size() for priority queues ):-
    cout<<pq1.size()<<endl;

    //swap() function

    priority_queue<int> pq;
    pq.push(1);pq.push(2);pq.push(3);
    pq.swap(pq1); //Swaps the containers.
    displayQueue(pq1);

    //PRIORITY QUEUE with comparator.
    /*Unlike vectors priority queue has a restriction that the comparator has to be of type class in which operator () is overloaded
      Initialization of priority queue with comparator requires a container also (You should specify where elements have to sit) 
      Container data type should be same as that of priority queue.*/

    priority_queue<int,vector<int>,Compare1> pq2; 

    /*Here instead of Compare class,you can use greater class template where operator() is overloaded exactly same as that of Compare here.
      priority_queue<int,vector<int>,greater<int>> pq2; works fine.
      But for other logics of defining priority,  Compare has to be implemented accordingly*/
    pq2.push(10);pq2.push(5);pq2.push(15);pq2.push(12);
    displayQueue(pq2);

    priority_queue<int,vector<int>,Compare2>pq3;
    pq3.push(10);pq3.push(5);pq3.push(15);pq3.push(12);
    displayQueue(pq3);


    return 0;
}