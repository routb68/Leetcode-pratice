class Solution {
public:
    int balancedString(string s) {
        char q='Q',w='W',e='E',r='R';
        unordered_map<char,int>ump;
        for(int i=0;i<s.size();++i){
            ump[s[i]]++;
        }
        int i=0,n=s.length(),res=s.length();
        for(int j=0;j<n;++j){
            ump[s[j]]--;
            while(i<=j+1 and ump[q]<=n/4 and ump[w]<=n/4 and ump[e]<=n/4 and 
                  ump[r]<=n/4){
                res=min(res,j-i+1);
                ump[s[i]]++;
                i++;
            }
        }
        return res;
    }
};