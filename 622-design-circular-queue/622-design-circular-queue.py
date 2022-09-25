class MyCircularQueue:

    def __init__(self, k: int):
        self.size=0
        self.maxsize=k
        self.t= [0]*k
        self.front=self.rear=-1

    def enQueue(self, value: int) -> bool:
        if self.size==self.maxsize:
            return False
        else :
            if self.rear==-1:
                self.rear=self.front=0
            else:
                self.rear= (self.rear+1)%self.maxsize
            self.t[self.rear]=value
            self.size+=1;
            return True

    def deQueue(self) -> bool:
        if self.size==0:
            return False
        if self.front==self.rear:
            self.front=self.rear=-1
        else :
            self.front=(self.front+1)%self.maxsize
        self.size-=1;
        return True
        

    def Front(self) -> int:
        if self.size==0:
            return -1
        else :
            return self.t[self.front]

    def Rear(self) -> int:
        if self.size==0:
            return -1
        else :
            return self.t[self.rear]
        

    def isEmpty(self) -> bool:
        return self.size==0
        

    def isFull(self) -> bool:
        return self.size==self.maxsize
        


# Your MyCircularQueue object will be instantiated and called as such:
# obj = MyCircularQueue(k)
# param_1 = obj.enQueue(value)
# param_2 = obj.deQueue()
# param_3 = obj.Front()
# param_4 = obj.Rear()
# param_5 = obj.isEmpty()
# param_6 = obj.isFull()