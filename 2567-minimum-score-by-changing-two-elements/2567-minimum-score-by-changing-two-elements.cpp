class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n = nums.size();
        return min({
            nums[n-1]-nums[2],
            nums[n-3]-nums[0],
            nums[n-2]-nums[1]
        });
    }
};