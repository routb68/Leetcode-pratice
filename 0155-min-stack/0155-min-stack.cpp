class MinStack {
public:
    stack<int>s;
    stack<int>mins;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(mins.size()) mins.push(min(mins.top(),val));
        else mins.push(val);
    }
    
    void pop() {
        mins.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
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