class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int a = *max_element(begin(nums),end(nums));
        return (k*a)+(k*(k-1))/2;
    }
};