class Solution {
public:
    int us[5001][501];
    int com(string s1,string s2,int m,int n){
        if(us[m][n]!=-1)
            return us[m][n];
        if(n==0)
            return us[m][n]=m;
        if(m==0)
            return us[m][n]=n;
        if(s1[m-1]==s2[n-1]){
            return us[m][n]=com(s1,s2,m-1,n-1);
        }else{
            return us[m][n]= 1 + min({com(s1,s2,m-1,n),com(s1,s2,m-1,n-1),com(s1,s2,m,n-1)});
        }
    }
    int minDistance(string word1, string word2) {
        for(int i=0;i<501;++i)
            for(int j=0;j<501;++j)
                us[i][j]=-1;
        return com(word1,word2,word1.length(),word2.length());
    }
};