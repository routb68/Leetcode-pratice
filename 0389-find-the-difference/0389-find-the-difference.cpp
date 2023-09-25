class Solution {
public:
    char findTheDifference(string s, string t) {
        int x =0;
        for(auto &a:s) x^=a;
        for(auto &b:t) x^=b;
        return x;
    }
};