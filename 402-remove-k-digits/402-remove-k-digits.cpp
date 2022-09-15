class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==num.length()){
            string s="0";
            return s;
        }
        stack<char>s;
        int x=0;
        s.push(num[0]);
        for(int i=1;i<num.size();++i){
            while(x<k and s.size()>0 and s.top()>num[i]){
                s.pop();
                ++x;
            }
            s.push(num[i]);
        }
        string s1="";
        while(s.size()){
            s1+=s.top();
            s.pop();
        }
        while(s1.size() and s1[s1.size()-1]=='0'){
            s1.pop_back();
        }
        reverse(s1.begin(),s1.end());
        while(k>x){
            if(s1.size()){
                s1.pop_back();
                ++x;
            }else{
                break;
            }
        }
        if(s1.size()==0)return "0";
        return s1;
    }
};