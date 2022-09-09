class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& pro) {
        sort(begin(pro),end(pro),[](auto &a,auto &b){
            if(a[0]!=b[0]) return a[0]<b[0];
            return a[1]>b[1];
        });
        int ans=0,max_2nd=0;
        for(int i=pro.size()-1;i>=0;--i){
           // auto &a=pro[i];
            if(pro[i][1]<max_2nd)++ans;
            max_2nd=max(max_2nd,pro[i][1]);
        }
        return ans;
    }
};