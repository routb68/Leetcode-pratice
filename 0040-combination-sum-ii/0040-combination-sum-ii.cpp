class Solution {
public:
    vector<vector<int>>ans;
    void go(vector<int>&cs,int tar,int idx,vector<int>&v){
         if(tar==0){
               ans.push_back(v); return;
            }
        for(int i=idx;i<cs.size();++i){
            if(i==idx and tar>=cs[i]){
                v.push_back(cs[i]);
                go(cs,tar-cs[i],i+1,v);
                v.pop_back();
            }else if (i!=idx and cs[i]!=cs[i-1] and cs[i]<=tar){
                v.push_back(cs[i]);
                go(cs,tar-cs[i],i+1,v);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& cs, int tar) {
        sort(begin(cs),end(cs));
        ans.clear();
        vector<int>v;
        go(cs,tar,0,v);
        return ans;
    }
};