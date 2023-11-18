class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(char &x:s){
            if(st.size()==0 or st.top()!=x){
                st.push(x);
            }else{
                st.pop();
            }
        }
        string s1;
        while(st.size()){
            s1+=st.top();st.pop();
        }
        reverse(begin(s1),end(s1));
        return s1;
    }
};