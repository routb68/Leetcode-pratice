class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1);
        for(int i=0;i<=n;++i){
            if(i<2) v[i]=i;
            if(i&1) v[i]=1+ v[i/2];
            else v[i]=v[i/2];
        }
        return v;
    }
};