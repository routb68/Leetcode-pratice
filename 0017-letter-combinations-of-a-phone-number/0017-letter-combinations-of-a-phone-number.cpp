class Solution {
public:
    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    vector<string>ans;
    void com(string d,int n, string s){
        if(n==d.size()){
            if(s.size())
                ans.push_back(s);
            return;
        }
        for(char x : pad[d[n]-'0']){
            com(d,n+1,s+x);
        }
    }
    vector<string> letterCombinations(string d) {
        string s;
        ans.clear();
        com(d,0,s);
        return ans;
    }
};