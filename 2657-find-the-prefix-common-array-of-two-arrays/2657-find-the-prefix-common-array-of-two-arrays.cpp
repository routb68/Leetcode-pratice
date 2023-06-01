class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int ans=0;
        vector<int>v(a.size()+5);
        vector<int>v1;
        for(int i=0;i<a.size();++i){
            ++v[a[i]];
            if(v[a[i]]>1)++ans;
            ++v[b[i]];
            if(v[b[i]]>1)++ans;
            v1.push_back(ans);
        }
        return v1;
    }
};