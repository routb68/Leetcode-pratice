class Solution {
public:
    int dp[21][21];
    int com(vector<int>&v,int a,int b,bool p){
        if(a==b) return v[a];
        if(a>b) return -1;
        if(dp[a][b]==-1){
            if(p){
                dp[a][b]=max(v[a]+com(v,a+1,b,0), v[b]+com(v,a,b-1,0));
            }else{
                dp[a][b]=min(-v[a]+com(v,a+1,b,1), -v[b]+com(v,a,b-1,1));
            }
        }
        return dp[a][b];
    }
    bool PredictTheWinner(vector<int>& nums) {
        for(int i=0;i<21;++i){
            for(int j=0;j<21;++j){
                dp[i][j]=-1;
            }
        }
        return com(nums,0,nums.size()-1,1)>=0;
    }
};