class Solution {
public:
    int bestClosingTime(string cu) {
        int ny=0,nn=0;
        for(char &x:cu){
            if(x=='Y') ++ny;
            else ++nn;
        }
        int ry=0,rn=0;
        map<int,vector<int>>mp;
        int ans=INT_MAX;
        for(int i=cu.length();i>=0;--i){
            if(cu[i]=='N')++rn;
            else ++ry;
            int penalty=(nn-rn+ry);
            mp[penalty].push_back(i);
            ans=min(ans,penalty);
        }
        int res=INT_MAX;
        for(int &x:mp[ans]){
            res=min(res,x);
        }
        return res;
    }
};