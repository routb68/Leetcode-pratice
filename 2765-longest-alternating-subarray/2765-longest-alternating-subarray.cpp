class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ans =0;
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i]==nums[i+1]-1){
                int j =i,one =1;
                while(j+1<nums.size() and (nums[j+1]-nums[j]==one)){
                    ++j;
                    one *= (-1);
                }
                ans = max(ans,j-i+1);
            }
        }
        if(ans==0) return -1;
        return ans;
    }
};