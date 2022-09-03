class Solution {
public:
    vector<int>ans;
    void dfs(int idx,int pre,int num,int n,int k){
        if(idx==n){
            ans.push_back(num);
            return;
        }
        if(pre-k>=0)dfs(idx+1,pre-k,(num*10)+pre-k,n,k);
        if(k and pre+k<10) dfs(idx+1,pre+k,(num*10)+pre+k,n,k);
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>v1;
        for(int i=1;i<10;++i){
            dfs(1,i,i,n,k);
        }
        return ans;
    }
};