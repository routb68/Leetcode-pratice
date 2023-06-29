class Solution {
public:
    bool go(string s,string s1){
        string s2;
        while(s2.size()<s1.size()){
            s2+=s;
        }
        return s2==s1;
    }
    string gcdOfStrings(string str1, string str2) {
        int x = __gcd(str1.size(),str2.size());
        int cnt =x;
        while(cnt<=min(str1.size(),str2.size())){
            string s;
            for(int i=0;i<cnt;++i){
                s+=str1[i];
            }
            cout<<s<<endl;
            if(go(s,str1) and go(s,str2)){
                return s;
            }
            cnt+=x;
        }
        return "";
    }
};