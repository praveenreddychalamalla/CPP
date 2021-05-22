#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pi pair<int, int>
#define pb push_back

template<class T>
void displayVecTrip(vector<T>& v){
    for(auto i: v)cout<<"("<<i.F<<","<<i.S.F<<","<<i.S.S<<")"<<'\t';
    cout<<endl;
}
bool sortByThird(pair<int,pi>& a, pair<int,pi>& b){
    return a.S.S<b.S.S;
}
int main(){
    pair<int,pi>p; //Acts as Triplet. pair<int, pair<int,int>>.
    vector<pair<int,pi>>v1;  //Vector of Triplets

    v1.pb(mp(2,mp(1,2)));
    v1.pb({1,{3,3}});
    v1.pb({2,{3,1}});
    
    //Sort Based on third value of triplet. i.e., pair.second.second
    sort(v1.begin(),v1.end(),sortByThird);
    displayVecTrip(v1);


    return 0;
}