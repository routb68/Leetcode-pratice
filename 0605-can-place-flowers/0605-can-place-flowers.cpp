class Solution {
public:
    bool canPlaceFlowers(vector<int>& fbd, int n) {
        if(n==1 and fbd.size()==1 ) return fbd[0]==0; 
        int ans =0,temp=0;
        int i =0;
        while(i<fbd.size() and fbd[i]==0)++i;
        if(i==fbd.size()) return n<=(i+1)/2;
        ans += (i)/2;
        for( i;i<fbd.size();++i){
            if(fbd[i]==0)++temp;
            else{
                temp-=2;
                if(temp>0){
                    ++temp;
                    ans+=(temp/2);
                }
                temp=0;
            }
        }
        if (temp>0)ans+=(temp/2);
        return n<=ans;
    }
};