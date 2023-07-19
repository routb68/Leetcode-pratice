class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
                       greater<pair<int,pair<int,int>>>>pq;
        set<pair<int,int>>us;
        vector<vector<int>>ans;
        pq.push(make_pair(nums1[0]+nums2[0],make_pair(0,0)));
        us.insert(make_pair(0,0));
        while(k-- and pq.size()){
            auto x = pq.top();pq.pop();
            int i = x.second.first,j= x.second.second;
            ans.push_back({nums1[i],nums2[j]});
            if(i+1<nums1.size() and us.find(make_pair(i+1,j))==us.end() ){
                pq.push(make_pair(nums1[i+1]+nums2[j],make_pair(i+1,j)));
                us.insert(make_pair(i+1,j));
            }
            if(j+1<nums2.size() and us.find(make_pair(i,j+1))==us.end() ){
                pq.push(make_pair(nums1[i]+nums2[j+1],make_pair(i,j+1)));
                us.insert(make_pair(i,j+1));
            }
        }
        return ans;
    }
};