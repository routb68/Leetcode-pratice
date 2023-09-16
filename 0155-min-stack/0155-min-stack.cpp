class MinStack {
public:
    vector<int>v;
    vector<int>minv;
    int temp=INT_MAX;
    int sz=0;
    MinStack() {
        
    }
    
    void push(int val) {
        ++sz;
        temp = min(temp,val);
        if(sz<=v.size()){
            v[sz-1]=val;
            minv[sz-1]=temp;
        }else{
            v.push_back(val);
            minv.push_back(temp);
        }
    }
    
    void pop() {
        --sz;
        if(sz>0)temp=minv[sz-1];
        else temp = INT_MAX;
    }
    
    int top() {
        return v[sz-1];
    }
    
    int getMin() {
        return minv[sz-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */