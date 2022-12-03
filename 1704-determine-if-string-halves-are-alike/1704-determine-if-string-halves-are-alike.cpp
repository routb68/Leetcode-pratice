#pragma GCC optimize("Ofast","inline","-ffast-math")
#pragma GCC target("avx,mmx,sse2,sse3,sse4")
class Solution {
public:
    bool halvesAreAlike(string s) {
        char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int a=0,b=0;
        for(int i=0;i<s.length()/2;++i){
            for(int j=0;j<10;++j){
                if (s[i]==arr[j]){
                    ++a;
                }
            }
        }
        for(int i=s.length()/2;i<s.length();++i){
            for(int j=0;j<10;++j){
                if (s[i]==arr[j]){
                    ++b;
                }
            }
        }
        return a==b;
    }
};