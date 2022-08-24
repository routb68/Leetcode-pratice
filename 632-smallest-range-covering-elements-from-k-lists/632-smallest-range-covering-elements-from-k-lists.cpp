class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int,int>>all;
        for(int i=0;i<nums.size();++i){
            for(int j=0;j<nums[i].size();++j){
                all.push_back({nums[i][j],i});
            }
        }
        sort(begin(all),end(all));
        int i=0,k=0;
        int a=-1e5,b=1e5;
        unordered_map<int,int>ump;
        for(int j=0;j<all.size();++j){
            if (! ump[all[j].second]++) ++k;
            if (k == nums.size()) { 
                while (ump[all[i].second] > 1) --ump[all[i++].second]; 
                if ( b-a > all[j].first - all[i].first) {
                    a=all[i].first;
                    b=all[j].first;
                }
        }
        }
        return {a,b};
    }
};