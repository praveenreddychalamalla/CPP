#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second 
#define pi pair<int,int> 
#define mp make_pair
#define pb push_back

template<class T>
void displayVecPair(vector<T>& v){
    for(auto i:v) cout<<'('<<i.F<<" "<<i.S<<')'<<'\t';
    cout<<endl;
}

bool sortBySec(pair<int, string>& a, pair<int, string>& b){
    return (a.S<b.S);
}

bool sortBySecDesc(pair<int, string>& a, pair<int, string>& b){
    return (a.S>b.S);
}

bool comp(pi& a, pi& b){
    if(a.S==b.S) return a.F>b.F;
    else return a.S<b.S;
}
int main() {
	pi a;
	a=mp(1,3);
	cout<<a.F<<" "<<a.S<<endl;;
	vector<pi>v; //Same as vector<pair<int,int>>;
    v.pb(mp(50,60));
    v.pb({70,80});
    v.pb({90,100});
    displayVecPair(v);
    
    vector<pair<int,string>>v1;
    v1.pb({1,"Hello"});
    v1.pb({3,"World"});
    v1.pb({6,"Pair"});
    v1.pb({5,"Vector"});
    v1.pb({2,"Queue"});
    v1.pb({4,"Stack"});
    displayVecPair(v1);

    //Sort in ascending order of pairs based on first value.
    sort(v1.begin(),v1.end()); //By deafault < is overloaded for first member of pair.
    displayVecPair(v1);

    //Sort in ascending order of pairs based on second value.
    sort(v1.begin(),v1.end(),sortBySec);
    displayVecPair(v1);

    //Sort in descending order of pairs based on second value.
    sort(v1.begin(),v1.end(),sortBySecDesc);
    displayVecPair(v1);

    vector<pi>v2;
    v2.pb({2,1});
    v2.pb({3,1});
    v2.pb({1,2});
    v2.pb({5,2});
    v2.pb({7,0});

    //Sort In Custom order based on comp function
    //Sorts in ascending order by second value , if second value is same, then sorts in descending order by first value
    sort(v2.begin(),v2.end(),comp);
    displayVecPair(v2);

	return 0;
}