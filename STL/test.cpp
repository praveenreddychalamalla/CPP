#include <bits/stdc++.h>
using namespace std;
string precompute(string& s,int n){
	string temp="";
	for(int i=0;i<n;i++){
		if(s[i]==':'){
			temp+="__";
		}
		else temp+=s[i];
	}
	return temp;
}
void solve(){
	int n,k,cnt=0,j;
	cin>>n>>k;
	string s;
	cin>>s;
	s=" "+precompute(s,n);
	cout<<s<<endl;
	n=s.length();
	queue<int>qi,qm;
	for(int i=1;i<n;i++){
		if(s[i]=='X'){
			while(!qi.empty())qi.pop();
			while(!qm.empty())qm.pop();
		}
		else if(s[i]=='M'){
			int flag=0;
			while(!qi.empty()){
				j=qi.front();
				qi.pop();
				if(k+1-abs(i-j)>0){
					cnt++;flag=1;
					break;
				}
			}
			if(flag==0)qm.push(i);
		}
		else if(s[i]=='I'){
			int flag=0;
			while(!qm.empty()){
				j=qm.front();
				qm.pop();
				if(k+1-abs(i-j)>0){
					cnt++;flag=1;
					break;
				}
			}
			if(flag==0)qi.push(i);
		}
		else continue;
	}
	cout<<cnt<<endl;

}
int main() {
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}