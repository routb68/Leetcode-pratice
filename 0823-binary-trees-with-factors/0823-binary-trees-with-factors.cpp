class Solution {
public:
    const int mod = 1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(begin(arr),end(arr));
        int n = arr.size();
        vector<int64_t>dp(n,1);
        unordered_map<int,int>us;
        for(int i=0;i<n;++i){
            us[arr[i]]=i;
        }
        int64_t ans =0;
        for(int i=1;i<n;++i){
            int64_t temp = 0;
            for(int j=0;j<i;++j){
                if((arr[i]%arr[j]==0 )and us.find(arr[i]/arr[j])!=us.end()){
                    temp += ((dp[us[arr[i]/arr[j]]]*dp[j])%mod);
                }
            }
            dp[i]+=(temp)%mod;
        }
        return accumulate(begin(dp),end(dp),0ll)%mod;
    }
};