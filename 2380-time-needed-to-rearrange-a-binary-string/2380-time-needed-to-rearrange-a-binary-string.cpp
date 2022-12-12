class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int z=0,sec=0;
        for(int i=0;i<s.length();++i){
            if(s[i]=='0')++z;
            if(s[i]=='1' and z>0) sec=max(z,sec+1);
        }
        return sec;
    }
};