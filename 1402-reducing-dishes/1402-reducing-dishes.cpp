class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        int ans =0,res =0;
        sort(begin(s),end(s));
        for(int i=s.size()-1;i>=0 and res+s[i]>0;--i){
            res+=s[i];
            ans +=(res);
        }
        return ans;
    }
};