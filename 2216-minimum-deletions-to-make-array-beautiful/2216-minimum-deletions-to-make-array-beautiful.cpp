class Solution {
public:
    int minDeletion(vector<int>& nums) {
        stack<int>s;
        for(int i=nums.size()-1;i>=0;--i){
            s.push(nums[i]);
        }
        int ans =0;
        while(s.size()>1){
            int x = s.top();s.pop();
            while(s.size() and s.top()==x){
                s.pop();++ans;
            }
            if(s.size())s.pop();
        }
        if((nums.size()-ans)%2==1)++ans;
        return ans;
    }
};