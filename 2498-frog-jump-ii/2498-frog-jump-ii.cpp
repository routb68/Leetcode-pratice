class Solution {
public:
    int maxJump(vector<int>& sts) {
        if(sts.size()==2) return sts[1]-sts[0];
        int ans=INT_MIN;
        for(int i=0;i<sts.size()-2;++i){
            ans=max(ans,sts[i+2]-sts[i]);
        }
        return ans;
    }
};