class Solution {
public:
    int ans ;
    void go(vector<int>&c,vector<int>&temp,int idx){
        if(idx==c.size()){
            int res =0;
            for(int i=0;i<temp.size();++i){
                res=max(res,temp[i]);
            }
            ans = min(ans,res);
            return ;
        }
        for (int i=0;i<temp.size();++i){
            temp[i]+=c[idx];
            go(c,temp,idx+1);
            temp[i]-=c[idx];
        }
        
    }
    int distributeCookies(vector<int>& cookies, int k) {
        ans =INT_MAX;
        vector<int>temp(k);
        go(cookies,temp,0);
        return ans;
    }
};