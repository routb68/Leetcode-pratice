class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq(begin(nums),end(nums));
        int sum =0,cnt =0;
        while(pq.size()){
            if(pq.top()>sum){
                sum += (pq.top()-sum);
                ++cnt;
            }
            pq.pop();
        }
        return cnt;
    }
};