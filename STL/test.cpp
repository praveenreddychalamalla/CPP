/**
 * @author Praveen Reddy Chalamalla
 * @create date 2021-06-01
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
#define F first
#define S second 
#define pi pair<int,int> 
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
void solve(){
  int n,dmax=0,j=0,cmax=0,k=0,flag=0,d=0,i;
  cin>>n;
  int a[n];
  stack<pair<int,int>>s;
  pair<int,int> *it; 
  for(i=0;i<n;i++)cin>>a[i];
  i=0;
  while(i<n){
    if(a[i]==1){
      s.push({1,i+1});
      if(dmax<s.size()){
        dmax=s.size();
        j=i+1;
      }
      i++;
    }
    else{
      while(!s.empty()&&a[i]==2){
        it=&(s.top());
        s.pop();
        d++;
        if(cmax<(i+1-(it->S)+1)){
          k=it->S;
          cmax=i+1-(it->S)+1;
        }
        i++;
      }
    }
  }
  cout<<dmax<<" "<<j<<" "<<cmax<<" "<<k<<endl;
}
int main() {
  solve();
	return 0;
}
