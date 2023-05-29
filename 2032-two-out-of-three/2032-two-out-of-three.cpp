class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        bool ok1[100],ok2[100],ok3[100];
        for(int i=0;i<100;++i) {ok1[i]=0;ok2[i]=0;ok3[i]=0;}
        for(int &x:nums1)ok1[x-1]=1;
        for(int &x:nums2)ok2[x-1]=1;
        for(int &x:nums3)ok3[x-1]=1;
        vector<int>v;
        for(int i=0;i<100;++i){
            int c=0;
            if(ok1[i])++c;
            if(ok2[i])++c;
            if(ok3[i])++c;
            if(c>1)v.push_back(i+1);
        }
        return v;
    }
};