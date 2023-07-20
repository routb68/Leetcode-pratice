class Solution {
public:
    map<pair<int,int>,int>us;
    int com(string s1,string s2,int m,int n){
        if(us.find(make_pair(m,n))!=us.end())
            return us[make_pair(m,n)];
        if(n==0)
            return us[make_pair(m,n)]=m;
        if(m==0)
            return us[make_pair(m,n)]=n;
        if(s1[m-1]==s2[n-1]){
            return us[make_pair(m,n)]=com(s1,s2,m-1,n-1);
        }else{
            return us[make_pair(m,n)]= 1 + min({com(s1,s2,m-1,n),com(s1,s2,m-1,n-1),com(s1,s2,m,n-1)});
        }
    }
    int minDistance(string word1, string word2) {
        return com(word1,word2,word1.length(),word2.length());
    }
};