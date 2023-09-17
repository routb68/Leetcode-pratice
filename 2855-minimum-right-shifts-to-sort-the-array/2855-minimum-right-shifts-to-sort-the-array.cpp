class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        vector<int>v1,v2;
        bool ok = false;
        int cnt =0;
        v1.push_back(nums[0]);
        for(int i=1;i<nums.size();++i){
            if(nums[i]>nums[i-1] and ok==false){
                v1.push_back(nums[i]);
            }else{
                if(ok==false){
                    ok = true;
                    ++cnt;
                    v2.push_back(nums[i]);
                }else{
                    if(cnt>=1 and nums[i]<nums[i-1]) return -1;
                    v2.push_back(nums[i]);
                }
            }
        }
        for(int i=0;i<v1.size();++i){
            for(int j=0;j<v2.size();++j){
                if(v2[j]>v1[i]) return -1;
            }
        }
        if(v1.size()==nums.size()) return 0;
        return v2.size();
    }
};