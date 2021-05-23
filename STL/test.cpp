#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second 
#define pi pair<int,int> 
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=(a);i<(b);i++)

void solve(){
	int n,k,e,i,j,cnt=0;
	cin>>n>>k;
	int a[n];
	map<int,int>m;
	FOR(i,0,k)cin>>a[i];
	FOR(i,0,n){
		if(m[a[i]]==0)m[a[i]]=1;
		else m[a[i]]+=1;
	}
	pi p=mp(-1,-1);
	for(auto e:m){
		if(p.S<e.S){
			p.S=e.S;
			p.F=e.F;
		}
	}
	for(i=0,j=k;i+j<n;i++,j++){
		if(a[i]!=p.F)cnt++;
		if(a[j]!=p.F)cnt++;
	}
	cout<<cnt<<endl;
	
}
int main(){
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
