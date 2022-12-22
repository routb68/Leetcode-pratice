class Solution {
public:
    int dp[201][201];
    int com(vector<vector<int>>&v,int i,int j){
        if(i>=v.size() or j>=v[0].size()) return 1e5;
        if(i==v.size()-1 and j==v[0].size()-1){
            if(v[i][j]<=0) return 1-v[i][j];
            return 1;
        }
        if(dp[i][j]==-1){
        int r=com(v,i+1,j),d=com(v,i,j+1);
        int res=min(r,d)-v[i][j];
        if(res<=0) res= 1;
        dp[i][j]=res ;
        }
        return dp[i][j];
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        for(int i=0;i<201;++i){
            for(int j=0;j<201;++j)
                dp[i][j]=-1;
        }
        return com(dungeon,0,0);
    }
};