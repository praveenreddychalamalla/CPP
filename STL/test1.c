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

void solve(){
 int n,k;
 cin>>n>>k;
 vector<int> a(n,0);
 for(int i=0;i<n;i++)cin>>a[i];
 if(k==n){
   cout<<0<<endl;
   return ;
 }
 vector<int>dp(n,0);
 queue<int>q;
 map<int,int>m;
 for(int i=0;i<n;i++){
   if(q.size()<=k){
     m[a[i]]++;
     q.push(a[i]);
     dp[i]=a[i];
   }
   else{
     dp[i]=a[i]+(m.begin())->first;
     m[q.front()]--;
     if(m[q.front()]==0)m.erase(q.front());
     q.pop();
     q.push(a[i]);
     m[a[i]]++;
   }
 }
 int ans=INT_MAX;
 for(int i=n-k-1;i<n;i++){
    ans=min(ans,dp[i]);
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
