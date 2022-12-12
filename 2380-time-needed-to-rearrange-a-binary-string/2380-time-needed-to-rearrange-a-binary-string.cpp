class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int sec=-1;
        bool ok=true;
        while(ok){
            ok=false;
            for(int i=0;i<s.length()-1;++i){
                if(s[i]=='0' and s[i+1]=='1'){
                    swap(s[i],s[i+1]);
                    ok=true;
                    ++i;
                }
            }
            ++sec;
        }
        return sec;
    }
};