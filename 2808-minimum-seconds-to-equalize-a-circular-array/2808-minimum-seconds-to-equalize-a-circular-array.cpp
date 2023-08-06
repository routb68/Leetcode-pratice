class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        unordered_map<int,vector<int>>ump;
        for(int i=0;i<nums.size();++i){
            ump[nums[i]].push_back(i);
        }
        int n = nums.size();
        int ans = INT_MAX;
        if(ump.size()==1) return 0;
        for( auto [y1,y]:ump){
            int temp;
            if(y.size()<=2){
                if(y.size()==1){
                    ans =min(ans,n/2);
                }else{
                    ans = min(ans,max({(n-y.back()+y[0])/2,(y[1]-y[0])/2}));
                        
                }
                continue;
            }
            // cout<<y1<<endl;
            temp = (y[0]+(n-1-y.back()));
            // cout<<temp<<endl;
            for(int i =1;i<y.size();++i){
                temp = max(temp,y[i]-y[i-1]-1);   
                
//                 cout<<y[i]-y[i-1]-1<<endl;
            }
            ans = min(ans,(temp+1)/2);
        }
        return ans;
    }
};