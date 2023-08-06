class Solution {
public:
    int pre[105];
    map<pair<int,int>,bool>us;
    bool com(vector<int>&nums,int m,int l,int hi){
        if(us.find(make_pair(l,hi))!=us.end()){
            return us[make_pair(l,hi)];
        }
        if(hi-l==1){
            if(nums[l]+nums[hi]>=m) return true;
            return false;
        }
        int x = pre[hi]-pre[l];
        bool ok = false;
        if(x>=m){
           ok = (ok or com(nums,m,l+1,hi));
        }
        x = pre[hi-1]-pre[l]+nums[l];
        if(x>=m){
            ok = (ok or com(nums,m,l,hi-1));
        }
        us[make_pair(l,hi)]=ok;
        return ok;
        
    }
    bool canSplitArray(vector<int>& nums, int m) {
        if(nums.size()<3) return true;
        pre[0]=nums[0];
        for(int i=1;i<nums.size();++i){
            pre[i]=pre[i-1]+nums[i];
        }
        return com(nums,m,0,nums.size()-1);
    }
};