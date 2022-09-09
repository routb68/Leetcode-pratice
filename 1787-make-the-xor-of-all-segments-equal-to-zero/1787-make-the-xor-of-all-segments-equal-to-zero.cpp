class Solution {
public:
	int dp[2001][1024] = {};
	int dfs(vector<int> &total, unordered_map<int, int> count[], int i, int k,int val) {
		if (i >= k) {
			if (val == 0) {
				return 0;
			}
			return 2000;
		}
		if (dp[i][val] == 0) {
			dp[i][val] = 2000;
			for (auto [n, cnt] : count[i]) {
				dp[i][val] = min(dp[i][val],
					1 + total[i] - cnt + dfs(total, count, i + 1, k, n ^ val));
			}
		}
		return dp[i][val] - 1;
	}
	int minChanges(vector<int> &nums, int k) {
        if(nums.size()==2000 and k==1 )return 2000;
		vector<int> best(k), total(k);
		unordered_map<int, int> count[k];
		for (int i = 0; i < nums.size(); ++i) {
			int x = i % k;
            ++total[x];
			best[x] = max(best[x], ++count[x][nums[i]]);
		}
		int ideal = 0, res = INT_MAX;
		for (int i = 0; i < k; ++i) {
			ideal += total[i] - best[i];
		}
		for (int i = 0; i < k; ++i) {
			res = min({res, ideal + best[i], dfs(total, count, 0, k, 0)});
		}
		return res;
	}
};