/**
 * @author Praveen Reddy Chalamalla
 * @create date 2021-06-06 
 */
#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define pi pair<int,int>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define endl '\n'
using namespace std;

int maxArea(vector<pair<int,int>>& v, int n){
  int area, max_area=0;
  sort(v.begin(),v.end());
  vector<pair<int,int>> left(n),right(n);
  stack<int>st;
  for(int i=0;i<n;i++){
    if(st.empty()){
      left[i]=make_pair(0,500);
      st.push(i);
    }
    else{
      while(!st.empty() && v[i].S<=v[st.top()].S) st.pop();
      left[i]=st.empty()?make_pair(0,500):make_pair(v[st.top()].F,v[st.top()].S);
      st.push(i);
    }
  }
   while(!st.empty()) //Clear Stack
    st.pop();
  for(int i=n-1;i>=0;i--){
    if(st.empty()){
      right[i]=make_pair(100000,500);
      st.push(i);
    }
    else{
      while(!st.empty() && v[i].S<=v[st.top()].S) st.pop();
      right[i]=st.empty()?make_pair(100000,500):make_pair(v[st.top()].F,v[st.top()].S);
      st.push(i);
    }
  }
  for(int i=0;i<n;i++){
    area= (right[i].F-left[i].F)*v[i].S;
    max_area=max(area,max_area);
  }

  max_area=max(max_area,v[0].F*500);
  for(int i=1;i<n-1;i++){
    max_area=max(max_area,(v[i].F-v[i-1].F)*500);
  }
  max_area=max(max_area,(100000-v[n-1].F)*500);
  return max_area;
}
void solve(){
  int n,x,y;
  cin>>n;
  vector<pair<int,int>> v;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    v.push_back({x,y});
  }
  cout<<maxArea(v,n);
}
int main() {
  solve();
	return 0;
}
