class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        cout<<arr[start]<<endl;
        if(arr[start]==0) return true;
        if(arr[start]<0) return false;
        bool ok1=false,ok2=false;
        int x= arr[start];
        arr[start]=-arr[start];
        if(x+start<arr.size()  ){
            ok1=canReach(arr,x+start);
        } 
        if(start-x>=0){
            ok2= canReach(arr,start-x);
        }
        
        return ok1 or ok2;
    }
};