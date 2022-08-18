class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>us;
        int res=0,currsum=0;
        int low=0;
        for(int i=0;i<nums.size();++i){
            if(us.find(nums[i])==us.end()){
                us.insert(nums[i]);
                currsum+=nums[i];
            }else{
                while(us.find(nums[i])!=us.end()){
                    currsum-=nums[low];
                    us.erase(nums[low]);
                    ++low;
                }
                us.insert(nums[i]);
                currsum+=nums[i];
            }
            res=max(res,currsum);
        }
        return res;
    }
};