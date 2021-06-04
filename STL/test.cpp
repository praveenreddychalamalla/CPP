/**
 * @author Praveen Reddy Chalamalla
 * @create date 2021-06-03 
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
bool isPrime(ll int n){
  if(n<=1) return false;
  if(n==2)return true;
  for(int i=2;i<=ceil(sqrt(n));i++)if(n%i==0)return false;
  return true;
}
void solve(){
   int n,cnt=0;
   cin>>n;
   int a[n];
   FOR(i,0,n)a[i]=i+1;
   FOR(i,0,n){
     if(isPrime(a[i]))cout<<a[i]<<" ";
   }
   cout<<endl;
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
