class Solution {
public:
    int trap(vector<int>& v) {
        int n=v.size();
        int dpl[n];
        int dpr[n];
        dpl[0]=v[0];
        for(int i=1;i<n;++i){
            dpl[i]=max(v[i],dpl[i-1]);
        }
        dpr[n-1]=v[n-1];
        for(int i=n-2;i>=0;--i){
            dpr[i]=max(dpr[i+1],v[i]);
        }
        int ans=0;
        for(int i=0;i<n;++i){
            ans+=(min(dpr[i],dpl[i])-v[i]);
        }
        return ans;
    }
};