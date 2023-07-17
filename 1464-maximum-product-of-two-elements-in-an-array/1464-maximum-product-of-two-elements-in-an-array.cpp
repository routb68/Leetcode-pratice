class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq(begin(nums),end(nums));
        int res = pq.top();
        --res;
        pq.pop();
        res*=(pq.top()-1);
        return res;
    }
};