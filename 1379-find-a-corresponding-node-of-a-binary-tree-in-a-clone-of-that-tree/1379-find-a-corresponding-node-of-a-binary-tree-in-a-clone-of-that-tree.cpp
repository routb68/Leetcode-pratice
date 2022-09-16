/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* org, TreeNode* clo, TreeNode* tar) {
        queue<TreeNode*>q;
        q.push(clo);
        while(q.size()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->val==tar->val){
                return curr;
            }
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        return NULL;
    }
};