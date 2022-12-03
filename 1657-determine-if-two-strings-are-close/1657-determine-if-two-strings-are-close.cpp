class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>v1(26),v2(26);
        for(int i=0;i<word1.length();++i){
            ++v1[word1[i]-'a'];
        }
        for(int i=0;i<word2.length();++i){
            ++v2[word2[i]-'a'];
        }
        for(int i=0;i<26;++i){
            if(v1[i]!=0 and v2[i]==0){
                return false;
            }
            if(v1[i]==0 and v2[i]!=0){
                return false;
            }
        }
        sort(begin(v1),end(v1));
        sort(begin(v2),end(v2));
        for(int i=0;i<26;++i){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }
};