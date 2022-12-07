class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int p=0,t=0;
        vector<int>v(1005);
        for(int i=0;i<nums.size();++i){
            t+=p-(v[nums[i]]*(i-v[nums[i]]));
            p+=i-v[nums[i]];
            ++v[nums[i]];
        }
        return t;
    }
};