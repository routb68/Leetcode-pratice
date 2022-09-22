class Solution {
public:
    void reverseString(vector<char>& s) {
        int lo=0,hi=s.size()-1;
        while(lo<hi){
            char x=s[hi];
            s[hi]=s[lo];
            s[lo]=x;
            ++lo;
            --hi;
        }
    }
};