class Solution {
public:
    int partitionString(string s) {
        vector<int>v(26,0);
        int ans=0;
        for(char &x:s){
            if(v[x-'a']==0){
                ++v[x-'a'];
            }else{
                ++ans;
                for(int i=0;i<26;++i) v[i]=0;
                ++v[x-'a'];
            }
        }
        return ans+1;
    }
};