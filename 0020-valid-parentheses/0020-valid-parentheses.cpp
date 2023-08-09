class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char &x:s){
            if(x=='(' or x=='{' or x=='['){
                st.push(x);
                continue;
            }
            if(st.size()==0) return false;
            if(x==')'){
                if(st.top()!='(') 
                    return false;
            }
            if( x=='}'){
                if(st.top()!='{')
                    return false;
            }
            if(x==']'){
                if(st.top()!='['){
                    return false;
                }
            }
            st.pop();
        }
        return st.size()==0;
    }
};