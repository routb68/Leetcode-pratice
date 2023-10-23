class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int lo = 0,hi=nums.size()-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==tar) return mid;
            if(nums[mid]>tar)hi=mid-1;
            else lo = mid+1;
        }
        return -1;
    }
};