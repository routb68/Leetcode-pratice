class Solution {
public:
	long long maxSum(vector<int> &nums, int m, int k) {
		long long ans = 0;
		unordered_map<int, int> us;
		int lo = 0, hi = 0;
		long long temp = 0;
		while (hi < nums.size() and lo+k<=nums.size()) {
			if (lo + k > hi) {
				temp += nums[hi];
				++us[nums[hi]];
				++hi;
			} else {
				if (us.size() >= m) {
					ans = max(ans, temp);
				}
				temp -= nums[lo];
				--us[nums[lo]];
				if (us[nums[lo]] == 0) {
					us.erase(nums[lo]);
				}
				++lo;
			}
            // if(lo==6)break;
		}
        if (us.size() >= m) {
					ans = max(ans, temp);
				}
		return ans;
	}
};