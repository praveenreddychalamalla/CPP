/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 10-05-2021.
*/
#include<iostream>
using namespace std;
class Example{
    public:
        int x;
        void add(Example E){
            x=x+E.x;
        }
        Example multiply(Example Ea, Example Eb){
            Example Ec;
            Ec.x=Ea.x*Eb.x;
            return Ec;
        }
};
int main(){
    Example E1,E2,E3;
    E1.x=5;
    E2.x=10;
    E2.add(E1);
    cout<<E1.x<<" "<<E2.x<<endl;
    E3=E3.multiply(E1,E2);
    cout<<E3.x;
}