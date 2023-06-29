class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        unordered_map<long long,long long>ump;
        long long ans =0;
        for (int i =0;i<nums.size();++i){
            long long currgcd = __gcd(k,nums[i]);
            for(auto &[x,y]:ump){
                if((currgcd*x)%k==0){
                    ans +=y;
                }
            }
            ++ump[currgcd];
        }
        return ans;
    }
};