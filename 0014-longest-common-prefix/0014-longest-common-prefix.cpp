class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = INT_MAX;
        for(int i=0;i<strs.size();++i){
            if(n>strs[i].size()){
                n=strs[i].size();
            }
        }
        string s;
        for(int i=0;i<n;++i){
            char x = strs[0][i];
            for (int j =0;j<strs.size();++j){
                if(x!=strs[j][i]){
                    return s;
                }
            }
            s+=x;
        }
        return s;
    }
};