class Solution {
public:
    int maxProfit(vector<int>& ps) {
        int ans =0;
        int min_ele =ps[0];
        for(int i =1;i<ps.size();++i){
            min_ele=min(ps[i],min_ele);
            ans = max(ans,ps[i]-min_ele);
        }
        return ans;
    }
};