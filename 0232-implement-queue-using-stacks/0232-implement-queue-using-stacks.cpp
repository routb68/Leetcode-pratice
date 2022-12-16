class MyQueue {
public:
    int x1;
    vector<int>v;
    MyQueue() {
        v.clear();
        x1=0;
    }
    
    void push(int x) {
        v.push_back(x);
    }
    
    int pop() {
        ++x1;
        return v[x1-1];
    }
    
    int peek() {
        return v[x1];
    }
    
    bool empty() {
        return v.size()==x1;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */