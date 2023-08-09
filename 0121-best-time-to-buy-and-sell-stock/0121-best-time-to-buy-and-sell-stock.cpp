class Solution {
public:
    int maxProfit(vector<int>& v) {
        int ans =0;int temp =v[0];
        for(int i=1;i<v.size();++i){
            temp = min(temp,v[i]);
            ans = max(ans,v[i]-temp);
        }
        return ans;
    }
};