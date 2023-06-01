class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int a = *max_element(begin(nums),end(nums));
        int ans=0;
        for(int i=0;i<k;++i){
            ans+=a;
            ++a;
        }
        return ans;
    }
};