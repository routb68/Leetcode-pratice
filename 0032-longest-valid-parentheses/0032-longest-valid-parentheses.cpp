class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        if(n<=1) return 0;
        int dp[n];
        int ans =0;
        for(int i=0;i<n;++i){
            dp[i]=0;
            if(s[i]=='(') continue;
            if(i>=1){
                if( s[i-1]=='(' ){
                    dp[i]=2+((i>=2) ? dp[i-2]:0);
                }
                else if(i-dp[i-1]-2>=0 and s[i-dp[i-1]-1]=='('){
                    dp[i]= dp[i-1]+dp[i-dp[i-1]-2]+2;
                    // cout<<"jsn"<<endl;
                }else if(i-dp[i-1]-1==0 and s[i-dp[i-1]-1]=='('){
                    dp[i]= dp[i-1]+2;
                }
            }
            ans = max(ans,dp[i]);
            // cout<<i<<" "<<dp[i]<<endl;
        }
        return ans;
    }
};