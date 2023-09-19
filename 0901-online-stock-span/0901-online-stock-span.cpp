class StockSpanner {
public:
    stack<int>s;
    vector<int>pc;
    
    StockSpanner() {
        
    }
    
    int next(int p) {
        while(s.size() and pc[s.top()]<=p ){
               s.pop();
         }
        int x ;
        if(s.size()>0){
            x= pc.size()-s.top();
        }else{
            x= pc.size()+1;
        }
        pc.push_back(p);
        s.push(pc.size()-1);
        return x;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

// stack<int>s;
//        vector<int>ans;
//        s.push(0);
//        ans.push_back(1);
//        for(int i=1;i<n;++i){
//            while(s.size() and pc[s.top()]<=pc[i] ){
//                s.pop();
//            }
//            if(s.size()==0){
//                ans.push_back(i+1);
//                s.push(i);
//            }else{
//                ans.push_back(i-s.top());
//                s.push(i);
//            }
//        }
//        return ans;