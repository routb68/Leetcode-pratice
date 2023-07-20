class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asds) {
        stack<int>s;
        for(int i=0;i<asds.size();++i){
            int x = asds[i];
            if(s.size()==0){
                s.push(x);
                continue;
            }
            if(x*s.top()<0 and s.top()>0){
                while(s.size() and x*s.top()<0 and s.top()>0){
                    if(abs(x)==abs(s.top())){
                        s.pop();
                        x=0;
                    }else{
                        if(abs(x)<abs(s.top())){
                            x=s.top();
                        }
                        s.pop();
                    }
                }
                if(x!=0)s.push(x);
            }else{
                s.push(x);
            }
        }
        vector<int>v;
        while(s.size()){
            v.push_back(s.top());
            s.pop();
        }
        reverse(begin(v),end(v));
        return v;
    }
};