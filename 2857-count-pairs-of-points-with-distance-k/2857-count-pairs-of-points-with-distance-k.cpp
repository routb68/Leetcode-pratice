class Solution {
public:
    int countPairs(vector<vector<int>>& crs, int k) {
        map<pair<int,int>,int>mp;
        int ans=0;
        for( int i=0;i<crs.size();++i){
            for(int x=0;x<=k;++x){
                ans += (mp[make_pair(x^crs[i][0], (k-x)^crs[i][1])]);
            }
            ++mp[make_pair(crs[i][0],crs[i][1])];
        }
        return ans;
    }
};