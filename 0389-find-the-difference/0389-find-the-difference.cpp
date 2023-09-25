class Solution {
public:
    char findTheDifference(string s, string t) {
        int x =0;
        for(char &a:s) x^=a;
        for(char &b:t) x^=b;
        return x;
    }
};