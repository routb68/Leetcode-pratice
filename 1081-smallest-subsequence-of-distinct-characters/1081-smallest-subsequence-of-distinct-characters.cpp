class Solution {
public:
    string go(string &s,int pos,vector<bool>&v){
        if(pos==s.size()){
            return "";
        }
        int x =pos;
        int char_fr[26];
        for(int i=0;i<26;++i)char_fr[i]=0;
        for(int i=pos;i<s.size();++i){
            if(v[s[i]-'a'])continue;
            ++char_fr[s[i]-'a'];
        }
        for(int i=pos;i<s.size();++i){
            if(v[s[i]-'a'])continue;
            if(s[i]<s[x])x=i;
            --char_fr[s[i]-'a'];
            if(char_fr[s[i]-'a']==0)break;
        }
        if(v[s[x]-'a']) return go(s,x+1,v);
        v[s[x]-'a']=true;
        return s[x]+go(s,x+1,v);
    }
    string smallestSubsequence(string s) {
        vector<bool>v(26);
        for(int i=0;i<26;++i)v[i]=false;
        return go(s,0,v);
    }
};

