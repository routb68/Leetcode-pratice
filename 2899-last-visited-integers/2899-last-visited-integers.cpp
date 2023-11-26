class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int>v;
        vector<int>temp;
        int cnt =0;
        for(int i=0;i<words.size();++i){
            if(words[i]=="prev"){
                cnt+=1;
                if(temp.size()>=cnt){
                    v.push_back(temp[temp.size()-cnt]);
                }else{
                    v.push_back(-1);
                }
            }else{
                cnt=0;
                temp.push_back(stoi(words[i]));
            }
        }
        return v;
    }
};