class Solution {
public:
    bool check(bool *good,vector<vector<int>>&st){
        for(int i=0;i<st.size();++i){
            if(good[i]){
                for(int j=0;j<st.size();++j){
                    if(i==j)
                        continue;
                    if(st[i][j]==0 and good[j]==true)
                        return false;
                    if(st[i][j]==1 and good[j]==false)
                        return false;
                }
            }
        }
        return true;
    }
    int maximumGood(vector<vector<int>>& st) {
        int n = 1<<st.size();
        int ans =0;
        bool good[st.size()];
        for (int i=0;i<n;++i){
            for(int j =0;j<st.size();++j){
                if(i & (1<<j)){
                    good[j]=true;
                }else{
                    good[j]=false;
                }
            }
            if(check(good,st)){
                int cnt =0;
                for (int k=0;k<st.size();++k)
                    if(good[k])
                        ++cnt;
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};