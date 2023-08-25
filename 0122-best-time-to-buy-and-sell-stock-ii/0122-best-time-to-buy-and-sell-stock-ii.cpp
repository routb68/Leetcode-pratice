class Solution {
public:
    int maxProfit(vector<int>& ps) {
        int ans=0;
        for( int i=1;i<ps.size();++i){
            if(ps[i]-ps[i-1]>0){
                ans+=(ps[i]-ps[i-1]);
            }
        }
        return ans;
    }
};