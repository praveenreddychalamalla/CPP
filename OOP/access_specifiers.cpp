/**
  * DOCUMENTATION
  * Author: Praveen Reddy Chalamalla
  * Created on 10-05-2021

  * This code demonstrates the access specifiers.
*/
#include<iostream>
using namespace std;
//By default members in a class are private
//Private attributes/methods can only be accessed within the class
class MyClass{
    public:
    int x;
    private:
    int y;
};
int main(){
    MyClass obj;
    obj.x=5;
    cout<<obj.x;
    //obj.y=10; // Not Allowed . Results in Error
    return 0;
}
