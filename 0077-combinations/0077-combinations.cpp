class Solution {
public:
    vector<vector<int>> ans;
    void go(int n,int k,vector<int>&v){
        if(n==0)
        {if(k==0){
            ans.push_back(v);
        }return;}
        v.push_back(n);
        go(n-1,k-1,v);
        v.pop_back();
        go(n-1,k,v);
    }
    vector<vector<int>> combine(int n, int k) {
        ans.clear();
        vector<int>v;
        go(n,k,v);
        return ans;
    }
};