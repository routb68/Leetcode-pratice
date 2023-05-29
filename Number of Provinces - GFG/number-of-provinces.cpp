//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int seen[501];
  void dfs(vector<vector<int>> &adj,int idx,int v){
      //cout<<idx<<endl;
      seen[idx]=1;
      for(int j=0;j<v;++j){
          if(adj[idx-1][j] and seen[j+1]==0){
              dfs(adj,j+1,v);
          }
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        for(int i=1;i<=V;++i)seen[i]=0;
        int res=0;
        for(int i=1;i<=V;++i){
            if(seen[i]==0){
                ++res;
                dfs(adj,i,V);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends