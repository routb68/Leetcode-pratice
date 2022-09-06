class Solution {
public:
    vector<int> decode(vector<int>& enco) {
        int res=1;
        for(int i=2;i<=enco.size()+1;++i){
            res^=i;
        }
        for(int i=1;i<enco.size();i=i+2){
            res^=enco[i];
        }
        vector<int>v;
        v.push_back(res);
        for(int i=0;i<enco.size();++i){
            enco[i]^=v.back();
            v.push_back(enco[i]);
        }
        return v;
    }
};