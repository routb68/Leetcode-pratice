class Solution {
public:
    void dfs(vector<vector<int>>&res,vector<int>&cds,int tar,vector<int>&v,int idx){
        if(tar<0) return;
        if(tar==0){
            res.emplace_back(v);
        }
        for(int i=idx;i<cds.size();++i){
            v.push_back(cds[i]);
            dfs(res,cds,tar-cds[i],v,i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& cds, int tar) {
        sort(begin(cds),end(cds));
        vector<vector<int>> res;
        vector<int>v;
        dfs(res,cds,tar,v,0);
        return res;
    }
};