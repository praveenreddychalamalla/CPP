#include<bits/stdc++.h>
using namespace std;
/*
    template<size_t N> class bitset;// Allocate N bits of memeory.

    Limitation: The size of bitset should be static.
*/
int main(){
    //Bit Access Functions
    /*  operator[] : Access bit
        count: Count bits set
        size: Return size
        test: Return bit value
        any: Test if any bit is set
        none: Test if no bit is set
        all: test if all bits are set */
    
    bitset<10>b1; //By default all bits will be set to 0
    cout<<b1<<endl;

    bitset<10>b2(10); //Binary of 200 will be stored
    cout<<b2<<endl;
    for(int i=0;i<10;i++)cout<<b2[i]; //LSB->MSB will be stored from Left to right in array
    cout<<endl;

    cout<<b2[1]<<endl;

    cout<<b2.count()<<endl;
    cout<<b2.size()<<endl;

    b2.flip();
    cout<<b2<<endl;
    b2.set(3,1);
    cout<<b2<<endl;
    b2.reset();
    cout<<b2<<endl;
    

   //Bit Operations
   /*set: Set bits in the bitset
    reset: Reset bits in the bitset
    flip: Flip bits in the bitset*/
    return 0;
}