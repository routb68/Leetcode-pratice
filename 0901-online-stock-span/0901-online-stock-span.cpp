class StockSpanner {
public:
    vector<int>v;
    stack<int>s;
    StockSpanner() {
        
    }
    
    int next(int pr) {
        v.push_back(pr);
        while(s.size() and v[s.top()]<=pr)s.pop();
        int x = 0;
        if(s.size()){
            x+=(v.size()-s.top()-1);
        }else{
            x+=v.size();
        }
        s.push(v.size()-1);
        return x;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */