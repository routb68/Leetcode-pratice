class Solution {
public:
    vector<int> minOperations(string bx) {
        vector<int>v(bx.size());
        for(int i=0;i<bx.size();++i){
            int ans =0;
            for(int j=0;j<bx.size();++j){
                if(bx[j]=='1'){
                    ans+= abs(j-i);
                }
                v[i]=ans;
            }
        }
        return v;
    }
};