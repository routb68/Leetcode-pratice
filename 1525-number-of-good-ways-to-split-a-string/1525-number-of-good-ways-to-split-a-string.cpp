class Solution {
public:
    int numSplits(string s) {
        int n=s.length();
        int dp[n],dpb[n];
        unordered_set<char>us;
        for(int i=0;i<n;++i){
            us.insert(s[i]);
            dp[i]=us.size();
        }
        us.clear();
        for(int i=n-1;i>=0;--i){
            us.insert(s[i]);
            dpb[i]=us.size();
        }
        int count =0;
        for(int i=0;i<n-1;++i){
            if(dp[i]==dpb[i+1]){
                ++count;
            }
        }
        return count;
    }
};