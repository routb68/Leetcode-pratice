class Solution {
public:
    int dp[1001][1001];
    int k,n;
    vector<int>nums;
    vector<int>mul;
    int com(int start,int idx){
        if(idx>=k or start>=k) return 0;
        if(dp[start][idx]==INT_MAX){
            int end=n-1+(start-idx);
            if(end<0 or end>n-1) return 0;
            dp[start][idx]=max((nums[start]*mul[idx])+com(start+1,idx+1),
                              (nums[end]*mul[idx])+com(start,idx+1));
        }
        return dp[start][idx];
    }
    int maximumScore(vector<int>& ns, vector<int>& ml) {
        nums=ns;
        mul=ml;
        for(int i=0;i<1001;++i){
            for(int j=0;j<1001;++j){
                dp[i][j]=INT_MAX;
            }
        }
        k=mul.size(),n=nums.size();
        return com(0,0);
    }
};