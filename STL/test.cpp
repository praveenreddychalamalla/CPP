/**
 * @author Praveen Reddy Chalamalla
 * @create date 2021-07-25
 */
#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define pi pair<int,int>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define all(V) (V).begin(), (V).end() 
#define ll long long
#define endl '\n'
#define mod ((long long int)1e9+7)
using namespace std;
bool comp(pair<ll int,ll int> a, pair<ll int,ll int> b){
  if(a.F==b.F)return a.S<b.S;
  return a.F<b.F; 
}
void solve(){
 ll int n,d;
 cin>>n>>d;
 ll int p[n],s[n];
 FOR(i,0,n)cin>>p[i];
 FOR(i,0,n)cin>>s[i];
 vector<pair<ll int, ll int>>v(n);
 FOR(i,0,n){
   v[i]={s[i],p[i]};
 }
 sort(all(v),comp);
 ll int ans=0;
 int i=0,j=n-1;
 
 while(i<j){
   if(v[i].S+v[j].S<=d){
     ans=max(ans,v[i].F+v[j].F);
     i++;
   }
   else {
     if(v[j].S<=d)ans=max(ans,v[j].F);
     j--;
   }
 }
 cout<<ans<<endl;

}

int main() {
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}
