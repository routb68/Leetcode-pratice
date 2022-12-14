class Solution {
public:
    vector<vector<int>> res;
    void go(vector<int>&cds,vector<int>&v,int tar,int idx){
        if(tar<0) return;
        if(tar==0){
            res.emplace_back(v);
            return;
        }
        for(int i=idx;i<cds.size();++i){
            v.push_back(cds[i]);
            go(cds,v,tar-cds[i],i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& cds, int tar) {
        res.clear();
        vector<int>v;
        sort(begin(cds),end(cds));
        go(cds,v,tar,0);
        return res;
    }
};