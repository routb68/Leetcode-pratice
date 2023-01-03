class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        if(s.size()<2) return 0;
        int res=0;
        for(int i=0;i<s[0].length();++i){
            for(int j=1;j<s.size();++j){
                if(s[j-1][i]>s[j][i]){
                    ++res;
                    break;
                }
            }
        }
        return res;
    }
};