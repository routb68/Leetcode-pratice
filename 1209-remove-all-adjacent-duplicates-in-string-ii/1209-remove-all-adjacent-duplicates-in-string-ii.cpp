class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(char &x:s){
            if(st.size()==0 or st.top().first!=x){
                st.push(make_pair(x,1));
            }else{
                st.top().second+=1;
                if(st.top().second==k)st.pop();
            }
        }
        string s1;
        while(st.size()){
            while(st.top().second--){
                s1+=st.top().first;
            }
            st.pop();
        }
        reverse(begin(s1),end(s1));
        return s1;
    }
};