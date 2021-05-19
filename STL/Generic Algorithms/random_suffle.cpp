#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;
/*
    class<RandomAccessIterator>
    void random_suffle(RandomAccessIterator first, RandomAccessIterator last);
    Internally implements rand() function

    You can also shuffle the elements of a container by passing user implemented generator function (Use other syntax of random_shuffle())
*/
int main(){
    srand(unsigned(time(0))); //Setting the seed. 
    // If seed is not set, everytime same random numbers will be generated and shuffle happens to be same.
    vector<int>v;
    for(int i=0;i<10;i++)v.push_back(i+1);

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    random_shuffle(v.begin(),v.end());

    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}