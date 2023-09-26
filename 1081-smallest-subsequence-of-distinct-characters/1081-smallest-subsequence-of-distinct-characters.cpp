class Solution {
public:
    string go(string s,int idx,bool *vis){
        if(idx==s.size()) return "";
        int frq[26];
        for(int i=0;i<26;++i)frq[i]=0;
        for(int i=idx;i<s.size();++i){
            if(vis[s[i]-'a'])continue;
            ++frq[s[i]-'a'];
        }
        int x=idx ;
        for(int i=idx;i<s.size();++i){
            if(vis[s[i]-'a'])continue;
            if(s[i]<s[x])x=i;
            --frq[s[i]-'a'];
            if(frq[s[i]-'a']==0) break;
        }
        if(vis[s[x]-'a']==true) return go(s,x+1,vis);
        vis[s[x]-'a']=1;
        return s[x]+go(s,x+1,vis);
    }
    string smallestSubsequence(string s) {
        bool vis[26];
        for(int i=0;i<26;++i){
            vis[i]=false;
        }
        return go(s,0,vis);
    }
};