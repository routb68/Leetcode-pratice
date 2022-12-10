class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int64_t res=INT_MIN;
        for(int j=0;j<strs.size();++j){
            int64_t ans=0;
            for(int i=0;i<=strs[j].length()-1;++i){
                if(strs[j][i]<'a'){
                    int64_t x= strs[j][i]-'0';
                    ans+=x;
                    ans*=10;
                }
                else{
                    int64_t x=strs[j].length();
                    res=max(res,x);
                    goto lebel;
                }
        }
            ans/=10;
            res=max(res,ans);
            lebel:;
        }
        return res;
    }
};