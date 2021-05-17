#include<iostream>
using namespace std;
//By declaring a function member as static, you make it independent of any particular object of the class
//A static member function can be called even if no objects of the class exist
//static functions can be accessed using  the class name and the scope resolution operator ::

//A static member function can only access static data member, other static member functions and any other functions from outside the class
class Box{
    public:
        static int getCount(){ 
            return cnt;
        }
    private:
        static int cnt;
        double length;
};
int Box::cnt=1;
int main(){
    cout<<Box::getCount();
}