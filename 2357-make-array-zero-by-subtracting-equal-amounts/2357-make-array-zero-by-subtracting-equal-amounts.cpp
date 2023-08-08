class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();++i){
            if(nums[i]){
                pq.push(nums[i]);
            }
        }
        int ans =0,temp=0;
        while(pq.size()){
            int x = pq.top();pq.pop();
            if(x>temp){
                temp=x;
                ++ans;
            }
        }
        return ans;
    }
};