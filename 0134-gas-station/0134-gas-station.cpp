class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(accumulate(begin(gas),end(gas),0)<accumulate(begin(cost),end(cost),0))
            return -1;
        int ans =0;
        int temp=0;
        for(int i=0;i<gas.size();++i){
            temp+=(gas[i]-cost[i]);
            if(temp<0){
                ans=i+1;
                temp=0;
            }
        }
        return ans;
    }
};