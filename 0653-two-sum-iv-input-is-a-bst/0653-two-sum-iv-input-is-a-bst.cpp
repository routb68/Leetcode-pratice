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
    unordered_set<int>us;
    bool go(TreeNode *root,int k){
        if(root==NULL) return false;
        if(us.find(k-root->val)!=us.end()) return true;
        us.insert(root->val);
        return (go(root->left,k) or go(root->right,k));
    }
    bool findTarget(TreeNode* root, int k) {
        return go(root,k);
    }
};