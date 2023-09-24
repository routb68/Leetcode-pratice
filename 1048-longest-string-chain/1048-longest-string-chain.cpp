class Solution {
public:
    vector<string>v[20];
    unordered_map<string,int>ump;
    
    
    bool check(string &s1,string &s2){
        int i=0,j=0;
        bool ok = false;
        while(i<s1.size()){
            if(s1[i]==s2[j]){
                ++i;++j;
            }else{
                if(ok==false){
                    ++j;
                    ok = true;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
    
    
    int go(string &s,int len){
        // if(len>20) return 0;
        if(ump.find(s)!=ump.end()) return ump[s];
        int cnt =0;
        for(int i=0;i<v[len].size();++i){
            if(check(s,v[len][i])){
                cnt = max(cnt,go(v[len][i],len+1));
            }
        }
        return ump[s]=cnt+1;
    }
    
    
    int longestStrChain(vector<string>& wds) {
        for(int i=0;i<wds.size();++i){
            v[wds[i].size()].push_back(wds[i]);
        }
        int ans =0;
        for(int i=0;i<wds.size();++i){
            if(ump.find(wds[i])!=ump.end())continue;
            int x = go(wds[i],wds[i].size()+1);
            ans = max(ans,x);
        }
        return ans;
    }
};