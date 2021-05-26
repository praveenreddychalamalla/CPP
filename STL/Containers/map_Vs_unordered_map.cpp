/**
    DOCUMENTATION
    Author: Praveen Reddy Chalamalla
    Created on 24-05-2021

    This code demonstrates the Time and Comlexity analysis of Map and Underorderd Map containers.
*/
#include<bits/stdc++.h>
#define F first
#define S second
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back;
using namespace std;
using namespace std::chrono;
/*
    Time Comparision between map and unordered_map
*/
int main(){
    
    map<double, double>m1;
    unordered_map<double, double>m2;
    for(double i=0;i<1000000;i++){
        m1.insert({i,i+1.0});
        m2.insert({i,i+1.0});
    }
    srand(time(0));
    vector<double>randElem;
    FOR(i,0,100000) randElem.push_back(rand()%2000000);

    cout<<endl<<"Finding 100000 elements in map and unordered map"<<endl;

    auto start=high_resolution_clock::now();
    for(auto x: randElem) m1.find(x);
    auto end=high_resolution_clock::now();
    auto duration=duration_cast<nanoseconds>(end-start);
    cout<<"Avg Time taken by map for finding 100000 elements= "<<duration.count()/100000<<" ns"<<endl;

    start=high_resolution_clock::now();
    for(auto x: randElem) m2.find(x);
    end=high_resolution_clock::now();
    duration=duration_cast<nanoseconds>(end-start);
    cout<<"Avg Time taken by unordered map for finding 100000 elements= "<<duration.count()/100000<<" ns"<<endl;
    
    return 0;
}