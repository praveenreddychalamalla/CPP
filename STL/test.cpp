// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
	void display(map<int,int>& m){
    for(auto e: m)cout<<"("<<e.first<<":"<<e.second<<")"<<"\t";
    cout<<endl;
	}
	
    int isValid(vector<vector<int>> a){
        int i,j,k,l;
        map<int,int>m;
        for(auto i:a){
            m.clear();
            for(auto j:i){
                if(j){
                    m[j]+=1;
                    if(m[j]>1) return 0;
                }
            }
            
        }
        return 1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
//3 0 6 5 0 8 4 0 0 5 2 0 0 0 0 0 0 0 0 8 7 0 0 0 0 3 1 0 0 3 0 1 0 0 8 0 9 0 0 8 6 3 0 0 5 0 5 0 0 9 0 6 0 0 1 3 0 0 0 0 2 5 0 0 0 0 0 0 0 0 7 4 0 0 5 2 0 6 3 0 0
