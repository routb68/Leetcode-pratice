class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for( int i=low;i<=high;++i){
            int x = i;
            vector<int>v;
            while(x){
                v.push_back(x%10);
                x/=10;
            }
            if(v.size()%2==0){
                int lo=0;
                int hi=0;
                for( int j=0;j<v.size();++j){
                    if(j<v.size()/2){
                        lo+=v[j];
                    }else{
                        hi+=v[j];
                    }
                }
                if(hi==lo)++cnt;
            }
        }
        return cnt;
    }
};