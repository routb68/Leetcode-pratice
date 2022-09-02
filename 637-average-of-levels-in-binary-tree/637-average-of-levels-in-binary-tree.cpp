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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        vector<double>v;
        double ans=0;
        int count=0;
        q.push(root);
        q.push(NULL);
        while(q.size()>1){
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL){
                q.push(NULL);
                ans/=count;
                v.push_back(ans);
                ans=0;
                count=0;
                continue;
            }
            ans+=curr->val;
            count++;
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        if(count>0){
            ans/=count;
            v.push_back(ans);
        }
        return v;
    }
};