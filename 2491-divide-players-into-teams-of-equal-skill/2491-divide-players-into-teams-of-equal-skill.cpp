class Solution {
public:
    long long dividePlayers(vector<int>& sk) {
        sort(begin(sk),end(sk));
        int cnt=sk[0]+sk[sk.size()-1];
        long long sum=0;
        for(int i=0;i<sk.size()/2;++i){
            if(cnt!=sk[i]+sk[sk.size()-1-i]) return -1;
            else 
                sum+=(sk[i] * sk[sk.size()-1-i]);
        }
        return sum;
    }
};