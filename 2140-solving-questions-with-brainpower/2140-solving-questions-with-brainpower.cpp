class Solution {
public:
    long long mostPoints(vector<vector<int>>& qs) {
        vector<int64_t>v(qs.size());
        vector<int64_t>m(qs.size()+1);
        m[qs.size()]=0;
        for(int i=qs.size()-1;i>=0;--i){
            v[i]=qs[i][0];
            if(i+qs[i][1]+1<qs.size()){
                v[i]+=m[i+qs[i][1]+1];
            }
            m[i]=max(m[i+1],v[i]);
        }
        return *max_element(begin(v),end(v));
    }
};