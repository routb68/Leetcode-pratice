#include <algorithm>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        unsigned long n=INT_MAX;
        bool ok =true;
        for(int i=0;i<strs.size();++i){
            n= min(strs[i].size(),n);
        }
        for(int k=0;k<n and ok ;++k){
            char x=strs[0][k];
            for(int i=0;i<strs.size();++i){
                if(x!=strs[i][k]){
                    ok=false;
                }
            }
            if(ok) s+=x;
        }
        return s;
    }
};