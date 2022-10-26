class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int ores=0,ans=0,num;
        for(int i=0;i<nums.size();++i){
            ores |=nums[i];
        }
        int n= (1<<nums.size());
        for(int i=1;i<=n;++i){
            num=0;
            for(int j=0;j<nums.size();++j){
                if(i & (1<<j)){
                    num |=nums[j];
                }
            }
            if(num==ores)++ans;
        }
        return ans;
    }
};