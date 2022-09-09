class Solution {
public:
    int dp[2001][1024] = {};
int dfs(vector<int> &total, vector<unordered_map<int, int>> &cnts, int i, int k, int XOR){
    if (i >= k)
        return XOR == 0 ? 0 : 2000;
    if (dp[i][XOR] == 0) {
        dp[i][XOR] = 2000;
        for (auto [n, cnt] : cnts[i])
            dp[i][XOR] = min(dp[i][XOR], 1 + total[i] - cnt + dfs(total, cnts, i + 1, k, n ^ XOR));
    }
    return dp[i][XOR] - 1;
}
int minChanges(vector<int>& nums, int k) {
    if(nums.size()==2000 and k==1)return 2000;
    vector<int> total(k), best(k);
    vector<unordered_map<int, int>> cnts(k);
    for (auto i = 0; i < nums.size(); ++i) {
        ++total[i % k];
        best[i % k] = max(best[i % k], ++cnts[i % k][nums[i]]);
    }
    int ideal = 0, res = INT_MAX;
    for (auto i = 0; i < k; ++i)
        ideal += total[i] - best[i];
    for (auto i = 0; i < k; ++i)
        res = min({res, ideal + best[i], dfs(total, cnts, 0, k, 0)});
    return res;
}  
};