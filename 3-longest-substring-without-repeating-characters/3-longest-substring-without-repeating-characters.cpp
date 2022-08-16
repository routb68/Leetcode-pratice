class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,ans=0,len=0;
        unordered_set<char>us;
        while(i<s.length() and len<s.length()){
            if(us.find(s[i])==us.end()){
                us.insert(s[i]);
                ++i;
                ans=max(ans,i-len);
            }else{
                us.erase(s[len]);
                ++len;
            }
        }
        return ans;
    }
};