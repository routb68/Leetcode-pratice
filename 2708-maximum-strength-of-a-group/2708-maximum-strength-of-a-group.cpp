class Solution {
public:
	long long maxStrength(vector<int> &nums) {
        if(nums.size()==1) return nums[0];
		sort(begin(nums), end(nums));
		long long ans = 0, cnt = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] < 0) ++cnt;
		}
		if (cnt % 2) {
			if (nums[nums.size() - 1] < 0) {
				for (int i = 0; i < nums.size() - 1; ++i) {
					if (ans == 0)
						ans += nums[i];
					else
						ans *= nums[i];
				}
			} else

				for (int i = 0; i < nums.size(); ++i) {
					if (nums[i] == 0) continue;
					if (i + 1 != nums.size() and nums[i] < 0 and
						nums[i + 1] >= 0)
						continue;
					if (ans == 0)
						ans += nums[i];
					else
						ans *= nums[i];
				}

		} else {
			for (int i = 0; i < nums.size(); ++i) {
				if (nums[i] == 0) continue;
				if (ans == 0)
					ans += nums[i];
				else
					ans *= nums[i];
			}
		}
		return ans;
	}
};