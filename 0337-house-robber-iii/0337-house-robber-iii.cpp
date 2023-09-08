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
    unordered_map<TreeNode*,int>ump;
    int rob(TreeNode* root) {
        if(ump.find(root)!=ump.end()) return ump[root];
        if(root==NULL) return ump[root]=0;
        int ans =root->val;
        if(root->left!=NULL){
            ans += rob(root->left->left)+rob(root->left->right);
        }
        if(root->right!=NULL){
            ans+= rob(root->right->left)+rob(root->right->right);
        }
        return ump[root]=max(ans,rob(root->left)+rob(root->right));
    }
};