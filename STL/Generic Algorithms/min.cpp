#include<iostream>
#include<algorithm>
using namespace std;
/*
    Default Syntax:
    template<class T>
    const T& min(const T& a, const T& b);

    Custom Syntax: Useful for 2D Vectors, pairs etc.
    template<class T,class Compare>
    const T& min(const T& a, const T& b, Compare comp)

    min() returns smaller of a,b. If a==b then a is returned.
*/
int main(){
    int a=10, b=20;
    cout<<min(a,b)<<endl;

    char ch1='x',ch2='a';
    cout<<min(ch1,ch2)<<endl;

    string str1="Praveen",str2="Reddy";
    cout<<min(str1,str2)<<endl;
    return 0;
}