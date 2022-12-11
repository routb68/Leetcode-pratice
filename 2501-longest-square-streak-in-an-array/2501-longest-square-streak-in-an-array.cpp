class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<int>us;
        for(int &x:nums){
            us.insert(x);
        }
        int64_t ans=0;
        for(int i=0;i<nums.size();++i){
            int64_t x=nums[i],cnt=0;
            while(us.find(x)!=us.end()){
                ++cnt;
                x*=x;
                if (x>INT_MAX) break;
            }
            ans=max(ans,cnt);
        }
        if(ans<2)return -1;
        return ans;
    }
};