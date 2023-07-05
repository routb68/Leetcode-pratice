class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<int>v;
        for(int i=0;i<s.size();++i){
            if(isalpha(s[i])){
                v.push_back(i);
            }
        }
        vector<string> ans ;
        int n = (1<<v.size());
        for(int i =0;i<n;++i){
            string s1 = s;
            for(int j=0;j<v.size();++j){
                if(i & (1<<j)){
                    s1[v[j]]= toupper(s1[v[j]]);
                }else{
                    s1[v[j]] = tolower(s1[v[j]]);
                }
            }
            ans.push_back(s1);
        }
        return ans;
    }
};