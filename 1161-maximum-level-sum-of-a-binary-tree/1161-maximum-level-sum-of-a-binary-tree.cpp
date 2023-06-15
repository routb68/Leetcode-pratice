/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<pair<int,int>>ans;
        int res=0,idx=0;
        while(q.size()>1){
            TreeNode* temp = q.front();
            q.pop();
            if(temp==NULL){
                ++idx;
                ans.push_back(make_pair(res,idx));
                q.push(NULL);
                // cout<<res<<endl;
                res=0;
                continue;
            }
            res+=temp->val;
            // cout<<res<<endl;
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        ++idx;
        ans.push_back(make_pair(res,idx));
        // cout<<ans.size();
        sort(begin(ans),end(ans));
        idx=ans.size()-1;
        while(idx>0 and ans[idx].first==ans[idx-1].first) --idx;
        return ans[idx].second;
    }
};