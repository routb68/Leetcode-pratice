class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        vector<int>v;
        for(int i=0;i<a.size();++i){
            int ans=0;
            for(int j=i;j>=0;--j){
                for(int k=i;k>=0;--k){
                    if(a[j]==b[k])++ans;
                }
            }
            v.push_back(ans);
        }
        
        return v;
    }
};