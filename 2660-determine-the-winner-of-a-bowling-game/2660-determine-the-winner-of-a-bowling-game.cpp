class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int ans=0, res=0;
        for(int i=0;i<p1.size();++i){
            bool ok =false;
            if(i-1>=0 and p1[i-1]==10)ok=true;
            if(i-2>=0 and p1[i-2]==10)ok =true;
            if(ok)ans+=(2*p1[i]);
            else ans +=p1[i];
        }
        for(int i=0;i<p2.size();++i){
            bool ok =false;
            if(i-1>=0 and p2[i-1]==10)ok=true;
            if(i-2>=0 and p2[i-2]==10)ok =true;
            if(ok)res+=(2*p2[i]);
            else res+=p2[i];
        }
        if(ans>res) return 1;
        if(res>ans) return 2;
        return 0;
    }
};