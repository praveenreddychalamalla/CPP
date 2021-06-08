/**
 * @author Praveen Reddy Chalamalla
 * @create date 2021-06-08 
 */
#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define pi pair<int,int>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define endl '\n'
using namespace std;
set<int>s;
void solve(){
  int n,q;
  cin>>n>>q;
  vector<int>a(n+1);
  for(int i=1;i<=n;i++)cin>>a[i];
  s.insert(1);
  for(int i=2;i<=n;i++){
    if(a[i]%a[i-1]!=0)s.insert(i);
  }
  while(q--){
    int c,i,x;
    cin>>c>>i;
    if(c==1){ 
      cin>>x;
      a[i]=x;
      s.insert(i);
      if(i+1<=n) s.insert(i+1);
      if(i+1<=n && a[i+1]%a[i]==0)s.erase(i+1);
      if(i-1>0 && a[i]%a[i-1]==0)s.erase(i);
    }
    else {
      auto it=s.upper_bound(i);
      it--;
      cout<<*it<<endl;
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}
