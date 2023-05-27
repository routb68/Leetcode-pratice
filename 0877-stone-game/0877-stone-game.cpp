class Solution {
public:
    int dp[505][505];
    int go(vector<int>&v,int i,int j){
        if(dp[i][j]!=INT_MIN) return dp[i][j];
        if(i==j-1) return dp[i][j]=max({v[i],v[j]});
        return dp[i][j]= max(v[i]+min(go(v,i+2,j),go(v,i+1,j-1)),
                            v[j]+min(go(v,i,j-2),go(v,i+1,j-1)));
    }
    bool stoneGame(vector<int>& ps) {
        for(int i=0;i<ps.size();++i){
            for(int j=0;j<ps.size();++j){
                dp[i][j]=INT_MIN;
            }
        }
        int sum = accumulate(begin(ps),end(ps),0);
        int res = go(ps,0,ps.size()-1);
        if(sum-res>res) return false;
        return true;
    }
};