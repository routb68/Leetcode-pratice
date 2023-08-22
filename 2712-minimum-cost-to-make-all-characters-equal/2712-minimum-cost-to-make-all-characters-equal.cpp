class Solution {
public:
    long long minimumCost(string nums) {
        long long ans =0;
        for(int i=1;i<nums.size();++i){
            if(nums[i]!=nums[i-1]){
                int x = nums.size()-i;
                ans += min({i,x});
            }
        }
        return ans;
    }
};