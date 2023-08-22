class Solution {
public:
    string reverseWords(string s) {
        string s1;
        vector<string>v;
        for( int i=0;i<s.size();++i){
            while(i<s.size() and s[i]==' ')++i;
            for( int j=i;j<s.size() and s[j]!=' ';++j){
                s1+=s[j];
            }
            if(s1.size()){
                v.push_back(s1);
            }
            i+=s1.size();
            s1.clear();
        }
        reverse(begin(v),end(v));
        for(auto x : v){
            s1+=x;
            s1+=' ';
        }
        s1.pop_back();
        return s1;
    }
};