class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a1=-1,a2=-2,cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==a1)++cnt1;
            else if (nums[i]==a2)++cnt2;
            else if(cnt1==0){cnt1=1,a1=nums[i];}
            else if(cnt2==0){cnt2=1;a2=nums[i];}
            else {--cnt1;--cnt2;}
        }
        cnt1=0;cnt2=0;
        for(int &x:nums){
            if(x==a1)++cnt1;
            if(x==a2)++cnt2;
        }
        vector<int>ans;
        if(cnt1>nums.size()/3)ans.push_back(a1);
        if(cnt2>nums.size()/3)ans.push_back(a2);
        return ans;
    }
};