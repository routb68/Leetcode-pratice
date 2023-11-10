class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int i =0,j=0;
        string s ;
        while(i<s1.size() and j<s2.size()){
            s+=s1[i];++i;
            s+=s2[j];++j;
        }
        while(i<s1.size()){
            s+=s1[i];++i;
        }
        while(j<s2.size()){
            s+=s2[j];++j;
        }
        return s;
    }
};