class Solution {
public:
    int countConsistentStrings(string a, vector<string>& ws) {
        int ans=0,res=0;
        for(int i=0;i<a.length();++i){
            ans=(ans | (1<<((a[i]-'a'))));
        }
        for( string &s:ws){
            int b=0;
            for(int i=0;i<s.length();++i){
            b=(b | (1<<((s[i]-'a'))));
            }
            if((b& ans)==b)++res; 
        }
        return res;
    }
};