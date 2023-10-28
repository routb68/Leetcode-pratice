class Solution {
public:
    const int mod = 1e9+7;
    int countVowelPermutation(int n) {
        int64_t ac[n],ec[n],ic[n],oc[n],uc[n];
        ac[0]=1,ec[0]=1,ic[0]=1,oc[0]=1,uc[0]=1;
        for(int i=1;i<n;++i){
            ac[i] = (ec[i-1])%mod;
            ec[i] = (ac[i-1]+ic[i-1])%mod;
            ic[i] = (ac[i-1]+ec[i-1]+oc[i-1]+uc[i-1])%mod;
            oc[i] = (ic[i-1]+uc[i-1])%mod;
            uc[i] = (ac[i-1])%mod;
        }
        return (ac[n-1]+ic[n-1]+ec[n-1]+oc[n-1]+uc[n-1])%mod;
    }
};