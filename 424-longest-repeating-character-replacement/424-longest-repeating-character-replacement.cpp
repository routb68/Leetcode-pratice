class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0,maxf=0;
        vector<int>cnt(26,0);
        for(int i=0;i<s.length();++i){
            ++cnt[s[i]-'A'];
            maxf=max(maxf,cnt[s[i]-'A']);
            if(res-maxf<k){
                ++res;
            }else{
                cnt[s[i-res]-'A']--;
            }
        }
        return res;
    }
};