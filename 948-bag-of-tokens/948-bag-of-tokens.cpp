class Solution {
public:
    int bagOfTokensScore(vector<int>& tks, int pw) {
        if(tks.size()==0)return 0;
        sort(begin(tks),end(tks));
        if(tks[0]>pw)return 0;
        int ans=0,last=0,res=0;
        for(int i=0;i<tks.size()-last;++i){
            if(tks[i]<=pw){
                pw-=tks[i];
                ++ans;
            }else if(ans>0){
                ++last;
                pw+=tks[tks.size()-last];
                --ans;
                --i;
            }else{
                break;
            }
            res=max(res,ans);
        }
        return res;
    }
};