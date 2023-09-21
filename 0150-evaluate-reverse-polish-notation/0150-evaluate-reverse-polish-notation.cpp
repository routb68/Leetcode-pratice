class Solution {
public:
    int evalRPN(vector<string>& tks) {
        stack<string>s;
        int ans;
        for(int i=0;i<tks.size();++i){
            if(tks[i]=="+"){
                int a = stoi(s.top());s.pop();
                int b = stoi(s.top());s.pop();
                // cout<<a+b<<endl;
                s.push(to_string(a+b));
            }else if (tks[i]=="-"){
                int a = stoi(s.top());s.pop();
                int b = stoi(s.top());s.pop();
                // cout<<a-b<<endl;
                s.push(to_string(b-a));
            }else if(tks[i]=="*"){
                int a = stoi(s.top());s.pop();
                int b = stoi(s.top());s.pop();
                // cout<<a*b<<endl;
                s.push(to_string(a*b));
            }else if(tks[i]=="/"){
                int a = stoi(s.top());s.pop();
                int b = stoi(s.top());s.pop();
                // cout<<b/a<<endl;
                s.push(to_string(b/a));
            }else {
                s.push(tks[i]);
            }
        }
        return stoi(s.top());
    }
};