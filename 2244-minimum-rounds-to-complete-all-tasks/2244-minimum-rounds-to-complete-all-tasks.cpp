class Solution {
public:
    int minimumRounds(vector<int>& v) {
        unordered_map<int,int>ump;
        for(int &x:v){
            ++ump[x];
        }
        int ans=0;
        for(auto [x,y]:ump){
            if(y==1) return -1;
            else if(y%3==0) ans+=(y/3);
            else  ans+=((y/3)+1);
        }
        return ans;
    }
};