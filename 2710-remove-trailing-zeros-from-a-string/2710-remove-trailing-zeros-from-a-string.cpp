class Solution {
public:
    string removeTrailingZeros(string num) {
        string s;
        int idx =0;
        reverse(begin(num),end(num));
        while(num[idx]=='0')++idx;
        for(int i=idx;i<num.size();++i) s+=num[i];
        reverse(begin(s),end(s));
        return s;
    }
};