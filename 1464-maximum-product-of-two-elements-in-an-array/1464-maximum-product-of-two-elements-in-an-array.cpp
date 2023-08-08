class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(int i=0;i<nums.size();++i){
            pq.push(nums[i]);
        }
        int ans =1;
        ans *=(pq.top()-1);pq.pop();
        ans *=(pq.top()-1);
        return ans;
    }
};