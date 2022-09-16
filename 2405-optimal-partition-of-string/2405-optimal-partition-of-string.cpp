class Solution {
public:
    int v[26];
    int partitionString(string s) {
        int ans=0;
        for(char &x:s){
            if(v[x-'a']==0){
                ++v[x-'a'];
            }else{
                ++ans;
                memset(v, 0, sizeof v);
                ++v[x-'a'];
            }
        }
        return ans+1;
    }
};