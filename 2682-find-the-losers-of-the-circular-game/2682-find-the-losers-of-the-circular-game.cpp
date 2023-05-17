class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int>v(n,0);
        int idx=0,a=1;
        while(v[idx]==0){
            ++v[idx];
            idx+=(k*a);
            ++a;
            idx= idx%n;
            //cout<<idx<<endl;
        }
        vector<int>ans;
        for(int i=0;i<n;++i){
            //cout<<v[i]<<" ";
            if(v[i]==0) ans.push_back(i+1);
        }
        return ans;
    }
};