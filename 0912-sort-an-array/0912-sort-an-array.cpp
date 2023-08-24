class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int>pq;
        for( int i=0;i<nums.size();++i){
            pq.push(nums[i]);
        }
        int i=nums.size()-1;
        while(pq.size()){
            nums[i]=pq.top();--i;
            pq.pop();
        }
        return nums;
    }
};