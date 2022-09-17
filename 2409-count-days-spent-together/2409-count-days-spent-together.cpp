class Solution {
public:
    int countDaysTogether(string aa, string la, string ab, string lb) {
        int m1 =(aa[0]-'0')*10 +(aa[1]-'0');
        int d1=(aa[3]-'0')*10+(aa[4]-'0');
        int m2 =(la[0]-'0')*10 +(la[1]-'0');
        int d2=(la[3]-'0')*10+(la[4]-'0');
        int m3 =(ab[0]-'0')*10 +(ab[1]-'0');
        int d3=(ab[3]-'0')*10+(ab[4]-'0');
        int m4 =(lb[0]-'0')*10 +(lb[1]-'0');
        int d4=(lb[3]-'0')*10+(lb[4]-'0');
        int dp[12]={0,31,59,90,120,151,181,212,243,273,304,334};//day passed till this month
        d1+=dp[m1-1];
        d2+=dp[m2-1];
        d3+=dp[m3-1];
        d4+=dp[m4-1];
        if(d1==d3 and d4==d2) return d2-d1+1;
        if(d1<d3){
            if(d2<d3) return 0;
            else if( d4<d2) return d4-d3+1;
            else return d2-d3+1;
        }
        if(d1>d3){
            if(d4<d1 )return 0;
            else if(d4>d2) return d2-d1+1;
            else return d4-d1+1;
        }
        return abs(d4-d2);
    }
};