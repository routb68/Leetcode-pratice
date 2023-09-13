class Solution {
public:
    int candy(vector<int>& rs) {
        int ans=0;
        int up=0,peak=0,down=0;
        for(int i=1;i<rs.size();++i){
            if(rs[i]>rs[i-1]){
                ++up; down=0;
                peak=up;
                ans+=(1+up);
            }else if(rs[i]<rs[i-1]){
                up=0;
                ++down;
                ans+=(1+down)+(peak>=down ?-1:0);
            }else{
                up=0;down=0;peak=0;
                ans+=1;
            }
        }
        return ans+1;
    }
};