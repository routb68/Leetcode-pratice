class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int>us;
        queue<int>q;
        q.push(0);
        while(q.size()){
            int curr=q.front();
            q.pop();
            if(us.find(curr)==us.end()){
                for(int &x:rooms[curr]) q.push(x);
                us.insert(curr);
            }
        }
        return us.size()==rooms.size();
    }
};