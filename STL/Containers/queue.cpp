#include<iostream>
#include<queue>
using namespace std;
/*  
    Queues doesn't support any kind of iterataors
    Unlike Vectors or lists, in Queue containers(Stack, Queue, Priority Queue, DeQueue), 
    front will be pointing to end and back will be pointing to beginning.  Elements are pushed from back(beginning) and popped from front (end)
    Assuming an imaginary linear container, elements are pushed from left and popped from right
*/
template<class T>
void displayQueue(queue<T>q){
    while(!q.empty()){
        cout<<q.front()<<" "; //We don't have a top() function for Queue instead we have front()
        q.pop();
    }
    cout<<endl;
}
queue<int> remove_even(queue<int>q){
    queue<int>mq;
    while(!q.empty()){
        if(q.front()%2==0)
            mq.push(q.front());
        q.pop();
    }
    return mq;
}
int main(){
    //QUEUE CONSTRUCTORS

    //queue(); Default Constructor
    queue<int>q1;

    //queue(const Container& con); Copy Constructor
    queue<int>q2(q1); // Initializes q2 which is same as q1. queue<int>q3=q1 also works.
    
    //QUEUE FUNCTIONS

    //push(), pop(), top(), empty() functions

    /*void push(const TYPE& val); Inserts element into the queue
      void pop(); Removes the top most element in the queue
      TYPE& front();Returns a reference to the front element of the queue
      bool empty()const- Returns True if queue has no elements, False otherwise*/
    for(int i=0;i<20;i++)q1.push(i+1);
    q2=q1;
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }cout<<endl;

    //swap() function

    q2.swap(q1); //Containers should be of same type.
    displayQueue(q1);

    //size() function

    //size_type size()const; Returns the number of elements in the queue.
    cout<<q1.size()<<endl;

    q1=remove_even(q1);
    displayQueue(q1);


    return 0;
}