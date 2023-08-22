class Solution {
public:
    vector<string> ans;
    void com(int n,string s,int l,int r){
        if(l==n and r==n){
            ans.push_back(s);
            return;
        }
        if(l>n or r>l)return;
        if(r>n) return;
        com(n,s+'(',l+1,r);
        com(n,s+')',l,r+1);
    }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        string s;
        com(n,s,0,0);
        return ans;
    }
};