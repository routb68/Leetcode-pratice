class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int pre=nums[0];
        for( int i=1;i<n;++i){
            if(i>pre){
                return false;
            }
            pre = max(pre,i+nums[i]);
            // cout<<pre<<" ";
        }
        // cout<<endl;
        return pre>=n-1;
        
    }
};