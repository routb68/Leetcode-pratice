class Solution {
public:
    int fst_idx(vector<int>&nums,int target){
        int lo = 0,hi = nums.size()-1;
        int ans = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]>target){
                hi = mid-1;
            }else{
                ans = mid;
                lo = mid+1;
            }
        }
        if(ans !=-1 and nums[ans]==target) return ans;
        return -1;
    }
    int  last_idx(vector<int>&nums,int target){
        int lo =0,hi = nums.size()-1;
        int ans =-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]>=target){
                ans = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        if(ans !=-1 and nums[ans]==target) return ans ;
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(last_idx(nums,target));
        ans.push_back(fst_idx(nums,target));
        return ans;
    }
};