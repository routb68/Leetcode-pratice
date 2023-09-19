class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        ans.push_back(-1);
        stack<int>s;
        s.push(nums2.back());
        for(int i=nums2.size()-2;i>=0;--i){
            while(s.size() and s.top()<nums2[i]){
                s.pop();
            }
            if(s.size()){
                ans.push_back(s.top());
            }else{
                ans.push_back(-1);
            }
            s.push(nums2[i]);
        }
        reverse(begin(ans),end(ans));
        unordered_map<int,int>ump;
        for(int i=0;i<nums2.size();++i){
            ump[nums2[i]]=i;
            // cout<<ans[i]<<" ";
        }
        vector<int>res(nums1.size());
        for(int i=0;i<nums1.size();++i){
            res[i]=(ans[ump[nums1[i]]]);
        }
        return res;
    }
};