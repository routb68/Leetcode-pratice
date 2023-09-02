class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int arr1[26],brr1[26],arr2[26],brr2[26];
        for( int i=0;i<26;++i){
            arr1[i]=0;arr2[i]=0;brr1[i]=0;brr2[i]=0;
        }
        for( int i=0;i<s1.size();++i){
            if(i&1){
                ++arr1[s1[i]-'a'];
                ++arr2[s2[i]-'a'];
            }else{
                ++brr1[s1[i]-'a'];
                ++brr2[s2[i]-'a'];
            }
        }
        for(int i=0;i<26;++i){
            if(arr1[i]!=arr2[i] or brr1[i]!=brr2[i])
                return false;
        }
        return true;
    }
};