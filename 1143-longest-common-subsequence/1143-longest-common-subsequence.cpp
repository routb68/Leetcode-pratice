class Solution {
public:
    vector<unordered_map<int,int>>ump;
    int cum(string &t1,string &t2,int a,int b){
        if(ump[a].find(b)==ump[a].end()){
            if(a==0  or b==0) return 0;
            int x;
        if(t1[a-1]==t2[b-1]) x= 1+ cum(t1,t2,a-1,b-1);
        else{
            x= max(cum(t1,t2,a-1,b),cum(t1,t2,a,b-1));
        }
        ump[a][b]=x;
        }
        return ump[a][b];
    }
    int longestCommonSubsequence(string t1, string t2) {
        int cnt=0;
        ump.resize(t1.length()+2);
        return cum(t1,t2,t1.length(),t2.length());
    }
};