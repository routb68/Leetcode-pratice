class Solution {
public:
    int largestCombination(vector<int>& cds) {
        vector<int>v(33);
        int x;
        for(int i=0;i<cds.size();++i){
            x=cds[i];
            for(int j=0;j<32;++j){
                if( x & (1<<j)){
                    v[j]++;
                }
            }
        }
        int ans=1;
        for(int i=0;i<33;++i){
            ans=max(ans,v[i]);
        }
        return ans;
    }
};