class Solution {
public:
    int go(vector<int>&nums,int diff){
        unordered_map<int,int>ump;
        ump[nums[0]]=1;
        int ans =1;
        for(int i=1;i<nums.size();++i){
            if(ump.find(nums[i]-diff)==ump.end()){
                ump[nums[i]]=1;
            }else{
                int x =0;
                if(ump.find(nums[i])!=ump.end()){
                    x = ump[nums[i]];
                }
                ump[nums[i]] = max(ump[nums[i]-diff]+1,x);
            }
            ans = max(ans,ump[nums[i]]);
        }
        return ans;
    }
    int longestArithSeqLength(vector<int>& nums) {
        int diff = *max_element(begin(nums),end(nums)) - 
            *min_element(begin(nums),end(nums));
        int res = 0 ;
        for(int i =-diff;i<=diff;++i){
            res = max(res,go(nums,i));
        }
        // cout<<endl;
        return res;
    }
};