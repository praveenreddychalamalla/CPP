#include<iostream>
#include<algorithm>
using namespace std;
/*
    Default Syntax:
    template<class T>
    const T& max(const T& a, const T& b);

    Custom Syntax: Useful for 2D Vectors, pairs etc.
    template<class T,class Compare>
    const T& max(const T& a, const T& b, Compare comp)

    max() returns largest of a,b. If a==b then a is returned.The comparisions are performed using < (Default) or comp
*/
int main(){
    int a=10, b=20;
    cout<<max(a,b)<<endl;

    char ch1='x',ch2='a';
    cout<<max(ch1,ch2)<<endl;

    string str1="Praveen",str2="Reddy";
    cout<<max(str1,str2)<<endl;
    return 0;
}