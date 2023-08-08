class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>>pq;
        int arr[260];
        char k = '0';
        for(int i=0;i<260;++i){
          arr[i]=0;
        }
        for(char &x:s){
            ++arr[x-'0'];
        }
        for(int i = 0 ;i<260;++i){
            if(arr[i]){
                pq.push(make_pair(arr[i],k));
            }
            k+=1;
        }
        string s1;
        while(pq.size()){
            auto x = pq.top();pq.pop();
            while(x.first--){
                s1+=x.second;
            }
        }
        return s1;
    }
};