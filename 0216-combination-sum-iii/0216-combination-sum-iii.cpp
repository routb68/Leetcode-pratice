class Solution {
public:
    vector<vector<int>>ans;
    void go(int i,vector<int>&v,int k,int n){
        if(k==0 and n==0){
            ans.push_back(v);
            return;
        }
        if(k==0 or n==0 or i>9){
            return;
        }
        if(n-i>=0){
            v.push_back(i);
            go(i+1,v,k-1,n-i);
            v.pop_back();
        }
        go(i+1,v,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        ans.clear();
        vector<int>v;
        go(1,v,k,n);
        return ans;
    }
};