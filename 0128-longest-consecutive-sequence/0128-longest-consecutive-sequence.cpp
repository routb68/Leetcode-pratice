class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(int &x:nums)ump[x]=1;
        int ans =0;
        for(int i=0;i<nums.size();++i){
            if(ump[nums[i]]>1)continue;
            int x = nums[i];
            int cnt = 1,y=0;
            while(ump.find(x+1)!=ump.end()){
                if(ump[x]>1){
                    cnt+=(ump[x]-1);
                    break;
                }
                ++x;++cnt;
            }
            ans = max(ans,cnt);
            x=nums[i];
           
            while(cnt>=1){
                if(ump[x]>1){
                    break;
                }
                ump[x]=cnt;
                ++x;--cnt;
            }
            //  cout<<nums[i]<<" "<<ump[nums[i]]<<endl;
        }
        return ans;
    }
};