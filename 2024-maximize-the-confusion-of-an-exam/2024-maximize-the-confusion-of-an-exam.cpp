class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int res=0,low=0,cnt=0;
        for(int i=0;i<s.length();++i){
            if(s[i]=='T')++cnt;
            while(cnt>k){
                if(s[low]=='T')--cnt;
                ++low;
            }
            res=max(i-low+1,res);
        }
        cnt=0,low=0;
        for(int i=0;i<s.length();++i){
            if(s[i]=='F')++cnt;
            while(cnt>k){
                if(s[low]=='F')--cnt;
                ++low;
            }
            res=max(i-low+1,res);
        }
        return res;
    }
};