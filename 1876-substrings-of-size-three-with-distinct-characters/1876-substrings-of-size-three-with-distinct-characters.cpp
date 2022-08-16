class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans=0;
        for(int i=2;i<s.length();++i){
            if(s[i]!=s[i-1] and s[i]!=s[i-2] and s[i-1]!=s[i-2]){
                ++ans;
            }
        }
        return ans;
    }
};