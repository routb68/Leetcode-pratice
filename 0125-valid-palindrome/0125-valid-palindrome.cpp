class Solution {
public:
    bool isPalindrome(string s) {
        int i =0,j= s.length()-1;
        while(i<j){
            while(isalnum(s[i])==false and i<j)++i;
            while(isalnum(s[j])==false and i<j)--j;
            if(tolower(s[i])!=tolower(s[j]))
                return false;
            ++i;
            --j;
        }
        return true;
    }
};