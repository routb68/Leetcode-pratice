class Solution {
public:
    int maxSum(vector<vector<int>>& v) {
        int res=INT_MIN;
        for(int i=0;i<v.size()-2;++i){
            for(int j=0;j<v[0].size()-2;++j){
                int ans=0;
                ans+=(v[i][j]+v[i][j+1]+v[i][j+2]);
                ans+=(v[i+1][j+1]);
                ans+=(v[i+2][j]+v[i+2][j+1]+v[i+2][j+2]);
                res=max(res,ans);
            }
        }
        return res;
    }
};