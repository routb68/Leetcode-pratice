class Solution {
public:
    bool isPalindrome(string s) {
        int i =0,j = s.size()-1;
        while(i<j){
            while(i< s.size() and iswalnum(s[i])==false)++i;
            while(j>=0 and iswalnum(s[j])==false)--j;
            if(j<=i) continue;
            if(tolower(s[i])!=tolower(s[j]))
                return false;
            ++i;--j;
        }
        return true;
    }
};