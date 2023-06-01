class Solution {
public:
    int res,ans;
    void dfs(int i, int j,vector<vector<int>>&vis,vector<vector<int>>&gd){
        int m= gd.size(),n=gd[0].size();
        vis[i][j]=1;
        res+=gd[i][j];
        // cout<<res<<endl;
        vector<vector<int>>v={{0,1},{0,-1},{1,0},{-1,0}};
        for(int a=0;a<4;++a){
            int r=i+v[a][0],c=j+v[a][1];
            if(r>=0 and r<m and c>=0 and c<n and vis[r][c]==0 and gd[r][c]!=0){
                // cout<<"jj"<<endl;
                dfs(r,c,vis,gd);
            }
        }
        
    }
    int findMaxFish(vector<vector<int>>& gd) {
        int m= gd.size(),n=gd[0].size();
        vector<vector<int>>vis(m,vector<int>(n));
        ans =INT_MIN;
        res=0;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(vis[i][j]==0 and gd[i][j]!=0){
                    dfs(i,j,vis,gd);
                    ans =max(ans,res);
                    // cout<<res<<endl;
                    res=0;
                }
            }
        }
        if(ans==INT_MIN) return 0;
        return ans;
    }
};