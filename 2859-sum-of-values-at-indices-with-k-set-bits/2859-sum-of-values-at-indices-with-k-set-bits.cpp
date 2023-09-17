class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans =0;
        for(int i=0;i<nums.size();++i){
            int x =i,cnt=0;
            while(x){
                if(x%2)++cnt;
                x/=2;
            }
            if(cnt==k)ans+=nums[i];
        }
        return ans;
    }
};