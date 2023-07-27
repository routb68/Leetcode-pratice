class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<2) return s.length();
        vector<int>v(250);
        int i=0,j=1;
        int ans=INT_MIN,cnt=1;
        v[s[0]]++;
        while(j<s.length()){
            if(v[s[j]]==0){
                ++v[s[j]];
                ++j;
                ++cnt;
            }else{
                while(v[s[j]]){
                    --v[s[i]];
                    ++i;
                    --cnt;
                }
            }
            ans=max(cnt,ans);
        }
        return ans;
    }
};