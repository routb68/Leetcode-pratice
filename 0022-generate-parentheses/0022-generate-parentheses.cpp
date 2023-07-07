class Solution {
public:
    vector<string>ans;
    void go(int l,int r,int n,string s){
        if(l<r or l>n){
            return;
        }
        if(l==r and l==n){
            ans.push_back(s);
            return ;
        }
        go(l+1,r,n,s+'(');
        go(l,r+1,n,s+')');
    }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        go(0,0,n,"");
        return ans;
    }
};