class Solution {
public:
    int countSeniors(vector<string>& ds) {
        int cnt =0;
        for(int i=0;i<ds.size();++i){
            string s;
            s+=ds[i][11];
            s+=ds[i][12];
            if(stoi(s)>60)++cnt;
        }
        return cnt;
    }
};