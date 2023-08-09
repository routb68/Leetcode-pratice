class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26];
        int brr[26];
        for(int i=0;i<26;++i){arr[i]=0;brr[i]=0;}
        for(int i =0;i<s.size();++i){
            ++arr[s[i]-'a'];
        }
        for(int i=0;i<t.size();++i){
            ++brr[t[i]-'a'];
        }
        for(int i=0;i<26;++i){
            if(arr[i]!=brr[i])
                return false;
        }
        return true;
    }
};