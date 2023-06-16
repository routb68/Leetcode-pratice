class Solution {
public:
    vector<vector<int>> gd,mc;
    int dp[51][51];
    int go(int row,int col){
        if(dp[row][col]!=-1) return dp[row][col];
        if(row==0){
            return dp[row][col] = gd[row][col];
        }
        int x = INT_MAX;
        for(int i=0;i<gd[0].size();++i){
            x = min(x,mc[gd[row-1][i]][col]+go(row-1,i));
        }
        x+=gd[row][col];
        return dp[row][col] = x;
    }
    int minPathCost(vector<vector<int>>& g, vector<vector<int>>& m) {
        gd = g;
        mc = m;
        int ans = INT_MAX;
        for(int i=0;i<51;++i)
            for(int j=0;j<51;++j)
                dp[i][j]=-1;
        for(int i=0;i<gd[0].size();++i){
            ans = min(ans,go(gd.size()-1,i));
        }       
        return ans ;
    }
};