class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int res=0;
        for(int i=k;i<=s.length();++i){
            string a="";
            for(int j=i-k;j<i;++j){
                a+=s[j];
            }
            int x=stoi(a);
            if(x!=0 and num%x==0)++res;
        }
        return res;
    }
};