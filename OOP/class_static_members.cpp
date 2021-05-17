#include<iostream>
using namespace std;
//No matter how many objects of a class are created, there will be only one copy of static member
//A static member is shared among all objects of a class (Global across all the objects of a class)
//By default static member is intitialized to zero if no explicit initialization is done
class Box{
    public:
    static int cnt;
};
int Box::cnt=0;     //As static members cannot be initialized inside a class
int main(){
    Box b1,b2,b3;
    b1.cnt++;b2.cnt++;b3.cnt++;
    cout<<b1.cnt<<" "<<b2.cnt<<" "<<b3.cnt<<endl;
    cout<<Box::cnt;      //Static members can also be accessed with the class name
}