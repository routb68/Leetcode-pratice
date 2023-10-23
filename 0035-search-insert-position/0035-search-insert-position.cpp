class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans =nums.size() ;
        int lo = 0,hi = nums.size()-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if (nums[mid]>target){
                ans = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return ans;
    }
};