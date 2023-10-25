class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& qs) {
        vector<vector<int>>hash;
        vector<int>frq(26);
        hash.push_back(frq);
        for(char &x:s){
            ++frq[x-'a'];
            hash.push_back(frq);
        }
        vector<bool>ans(qs.size());
        for(int i=0;i<qs.size();++i){
            int lidx = qs[i][0],ridx=qs[i][1],k = qs[i][2];
            // cout<<lidx<<" "<<ridx<<endl;
            int cnt = 0;
            for(int j=0;j<26;++j){
                cnt += (hash[ridx+1][j] - hash[lidx][j])%2;
            }
            // cout<<cnt<<endl;
            if((ridx-lidx+1)%2==1)--cnt;
            if(k>=cnt/2)ans[i]=true;
            else ans[i]= false;
        }
        return ans;
    }
};