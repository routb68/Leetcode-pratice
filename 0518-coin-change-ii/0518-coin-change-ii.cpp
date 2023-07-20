class Solution {
public:
     map <pair<int,int>,int>us;
    int com(int amt,vector<int>&cs,int idx ){
        if(us.find(make_pair(amt,idx))!=us.end()){
            return us[make_pair(amt,idx)];
        }
        if(amt==0){
            return us[make_pair(amt,idx)]=1;
        }
        if(idx==0){
            return us[make_pair(amt,idx)]=0;
        }
        if(amt<cs[idx-1]){
            us[make_pair(amt,idx)]=com(amt,cs,idx-1);
        }else{
            us[make_pair(amt,idx)]=com(amt,cs,idx-1) + com(amt-cs[idx-1],cs,idx);
        }
        return us[make_pair(amt,idx)];
    }
    int change(int amount, vector<int>& coins) {
        return com(amount,coins,coins.size());
        
    }
};