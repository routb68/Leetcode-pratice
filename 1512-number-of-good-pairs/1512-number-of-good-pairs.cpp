class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int frq[101] {0};
        for(int &x:nums){
            ++frq[x];
        }
        int ans =0;
        for(int &x:frq){
            if(x){
                int temp = x*(x-1);
                temp/=2;
                ans+=temp;
            }
        }
        return ans;
    }
};