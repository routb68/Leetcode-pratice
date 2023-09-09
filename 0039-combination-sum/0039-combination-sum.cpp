class Solution {
public:
    vector<vector<int>>ans;
    void go(vector<int>&cs,int tar,int idx,vector<int>&temp){
        if(idx==0){
            if(tar==0){
                ans.push_back(temp);
            }
            return;
        }
        if(tar>=cs[idx-1]){
            temp.push_back(cs[idx-1]);
            go(cs,tar-cs[idx-1],idx,temp);
            temp.pop_back();
        }
        go(cs,tar,idx-1,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& cs, int t) {
        ans.clear();
        vector<int>v;
        go(cs,t,cs.size(),v);
        return ans;
    }
};