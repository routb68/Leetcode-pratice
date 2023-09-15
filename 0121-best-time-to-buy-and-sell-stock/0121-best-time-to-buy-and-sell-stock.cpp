class Solution {
public:
    int maxProfit(vector<int>& ps) {
        int ans=INT_MAX;
        int n = ps.size();
        int min_ele[n];
        for(int i=0;i<n;++i){
            ans = min(ans,ps[i]);
            min_ele[i]=ans;
        }
        int max_ele=-1;
        ans=-1;
        for(int i=n-1;i>=0;--i){
            max_ele=max(ps[i],max_ele);
            ans=max(ans,max_ele-min_ele[i]);
        }
        return ans;
    }
};