class Solution {
public:
    vector<int> sortByBits(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();++i){
            int x =nums[i];
            int cnt =0;
            for(int j=0;j<30;++j){
                if( x & (1<<j))++cnt;
            }
            v.push_back(make_pair(cnt,x));
        }
        sort(begin(v),end(v));
        vector<int>ans;
        for(int i=0;i<nums.size();++i){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};