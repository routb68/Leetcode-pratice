class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        vector<int>ans;
        if(nums.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int res = -1;
        int lo = 0, hi = nums.size()-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]<tar){
                lo = mid +1;
            }else{
                res = mid;
                hi = mid-1;
            }
        }
        if(res == nums.size() or res ==-1  or nums[res]!=tar){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        ans .push_back(res);
        lo = 0, hi = nums.size()-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]<=tar){
                res = mid;
                lo = mid +1;
            }else{
                hi = mid-1;
            }
        }
        ans.push_back(res);
        return ans;
    }
};