class Solution {
public:
    map<pair<int,int>,int>mp;
    int com( string &s1,string &s2, int m,int n){
        if(mp.find(make_pair(m,n))!=mp.end()){
            return mp[make_pair(m,n)];
        }
        if(m==0 or n==0){
            return mp[make_pair(m,n)]=0;
        }
        if(s1[m-1]==s2[n-1]){
            return mp[make_pair(m,n)]=1 + com(s1,s2,m-1,n-1);
        }
        return mp[make_pair(m,n)]=max(com(s1,s2,m-1,n),com(s1,s2,m,n-1));
    }
    int longestPalindromeSubseq(string s) {
        string s1;
        for(int i =0;i<s.size();++i){
            s1+=s[i];
        }
        reverse( begin(s1),end(s1));
        return com(s,s1,s.size(),s.size());
    }
};