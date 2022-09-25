class MyCircularQueue {
public:
    int front,rear,size,k;
    vector<int>arr;
    MyCircularQueue(int sz) {
        k=sz;
        arr.resize(k);
        front =-1,rear=-1;
        size=0;
    }
    
    bool enQueue(int value) {
        if(size==k) return false;
        if(front ==-1){
            front=0;
            rear=0;
            arr[front]=value;
            ++size;
            return true;
        }
        ++rear;
        rear%=k;
        arr[rear]=value;
        ++size;
        return true;
    }
    
    bool deQueue() {
        if(size==0) return false;
        front++;
        front%=k;
        --size;
        return true;
    }
    
    int Front() {
        if( size==0) return -1;
        return arr[front];
    }
    
    int Rear() {
        if( size==0) return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */