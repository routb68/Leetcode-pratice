class Solution {
public:
    int bestTeamScore(vector<int>& sc, vector<int>& ag) {
        if(sc.size()==1) return sc[0];
        vector<pair<int,int>>v(sc.size());
        for(int i=0;i<sc.size();++i){
            v[i].first=ag[i];
            v[i].second=sc[i];
        }
        sort(begin(v),end(v));
        for(int i=0;i<sc.size();++i){
            sc[i]=v[i].second;
        }
        int dp[1000];
        //for(int i=0;i<sc.size();++i)dp[i]=0;
        dp[0]=sc[0];
        int ans =INT_MIN;
        for(int i=1;i<sc.size();++i){
            dp[i]=sc[i];
            for(int j=i-1;j>=0;--j){
                if(sc[i]>=sc[j]){
                    dp[i]=max(dp[i],dp[j]+sc[i]);
                }
            }
            ans =max(ans,dp[i]);
        }
        return ans;
    }
};