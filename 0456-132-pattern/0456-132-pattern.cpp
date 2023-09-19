class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n =nums.size();
        int min_ele[n];
        min_ele[0]=nums[0];
        for(int i=1;i<n;++i){
            min_ele[i]=min(nums[i],min_ele[i-1]);
        }
        stack<int>s;
        for(int i=n-1;i>=0;--i){
            while(s.size() and s.top()<nums[i]){
                if(s.top()>min_ele[i]){
                    return true;
                }
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};