class Solution {
public:
    int canCompleteCircuit(vector<int>& gs, vector<int>& cs) {
        if(accumulate(begin(gs),end(gs),0ll)<accumulate(begin(cs),end(cs),0ll))
            return -1;
        int ans =0;
        int temp=0;
        for(int i=0;i<cs.size();++i){
            temp+= (-cs[i]+gs[i]);
            if(temp<0){
                ans=i+1;
                temp=0;
            }
        }
        return ans;
    }
};