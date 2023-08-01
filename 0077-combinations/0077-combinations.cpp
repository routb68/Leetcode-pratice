class Solution {
public:
    vector<vector<int>>ans;
    void com(int n,int k, vector<int>&v){
        if(n==0){
            if(v.size()==k)
                ans.push_back(v);
            return;
        }
        v.push_back(n);
        com(n-1,k,v);
        v.pop_back();
        com(n-1,k,v);
    }
    vector<vector<int>> combine(int n, int k) {
        ans.clear();
        vector<int>v;
        com(n,k,v);
        return ans;
    }
};