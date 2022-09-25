class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=1;
        int max_ele=*max_element(begin(nums),end(nums));
        for(int i=0;i<nums.size();++i){
            if(nums[i]==max_ele){
                int j=i;
                while(j<nums.size() and nums[j]==max_ele){
                    ++j;
                }
                ans=max(ans,j-i);
                i=j;
            }
        }
        return ans;
    }
};