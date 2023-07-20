class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()<2) return chars.size();
        auto ans = chars;
        int idx =0,cnt =1,i=0;
        while(idx<chars.size()){
            cnt =1;
            while(idx+1<chars.size() and chars[idx]==chars[idx+1]){
                ++idx;
                ++cnt;
            }
            ans[i]=chars[idx];
            ++idx;
            ++i;
            vector<int>v;
            if(cnt==1)continue;
            while(cnt ){
                v.push_back(cnt%10);
                cnt/=10;
            }
            reverse(begin(v),end(v));
            for(int &x:v){
                string str =to_string(x);
                ans[i] = str[0];
                ++i;
            }
        }
        for(int j=0;j<i;++j)chars[j]=ans[j];
        return i;
    }
};