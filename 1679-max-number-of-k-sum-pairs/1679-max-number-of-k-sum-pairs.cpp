class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        for (int &x:nums)
            ++ump[x];
        int cnt =0;
        for(int i=0;i<nums.size();++i){
            if(k>nums[i] and ump[nums[i]]>0 and ump[k-nums[i]]>0 
               and nums[i]!=k-nums[i] ){
                --ump[nums[i]];
                --ump[k-nums[i]];
                ++cnt;
            }else if(nums[i]==k-nums[i] and ump[nums[i]]>=2){
                ump[nums[i]]-=2;
                ++cnt;
            }
        }
        return cnt;
    }
};