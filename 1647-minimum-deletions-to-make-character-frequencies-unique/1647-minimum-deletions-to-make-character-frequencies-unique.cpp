class Solution {
public:
    int minDeletions(string s) {
        int charfrq[26];
        for(int i=0;i<26;++i)charfrq[i]=0;
        for(char &x:s)++charfrq[x-'a'];
        map<int,int>ump;
        for(int i=0;i<26;++i){
            if(charfrq[i]){
                ++ump[charfrq[i]];
            }
        }
        int ans =0;
        for( auto [x,y]:ump){
            for(int i=0;i<y-1;++i){
                int z = x;
                while(z and ump.find(z)!=ump.end()){
                    --z;
                }
                ans += (x-z);
                if(z)ump[z]=1;
            }
            ump[x]=1;
        }
        return ans;
    }
};