class Solution {
public:
    int minProcessingTime(vector<int>& pt, vector<int>& ts) {
        sort(begin(ts),end(ts),greater<int>());
        sort(begin(pt),end(pt));
        int ans =0;
        for(int i=0;i<pt.size();++i){
            for(int j=4*i;j<4*(i+1);++j){
                ans = max(ans,pt[i]+ts[j]);
            }
        }
        return ans;
    }
};