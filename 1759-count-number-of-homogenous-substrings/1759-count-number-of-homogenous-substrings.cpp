class Solution {
public:
    const int mod = 1e9+7;
    int countHomogenous(string s) {
        int64_t temp = 1,ans=0;
        for(int i=1;i<s.size();++i){
            if(s[i]==s[i-1])++temp;
            else{
                ans +=((temp*(temp+1))/2);
                ans %=mod;
                temp=1;
            }
        }
        ans +=((temp*(temp+1))/2);
        return ans%mod;
    }
};