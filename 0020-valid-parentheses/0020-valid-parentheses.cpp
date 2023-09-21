class Solution {
public:
    bool check(char b,char a){
        return {(a=='(' and b==')') or (a=='{' and b=='}') or (a=='[' and b==']')};
    }
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();++i){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                st.push(s[i]);
            }else{
                if(st.size()==0) return false;
                if(check(s[i],st.top())==false) return false;
                st.pop();
            }
        }
        return st.size()==0;
    }
};