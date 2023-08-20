class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int m = str2.size(),n=str1.size();
        // bool check[m];
        int i =0,j=0;
        while(i<m and j<n){
            char x = str2[i];
            char y;
            if(x=='a'){
                y='z';
            }else{
                y= x-1;
            }
            while(j<n and (str1[j]!=x and str1[j]!=y)){
                ++j;
            }
            if(j==n) return false;
            ++j;
            ++i;
        }
        if(i<m) return false;
        return true;
    }
};