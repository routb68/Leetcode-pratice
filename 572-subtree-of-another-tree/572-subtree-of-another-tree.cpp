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
    bool ok;
    bool check(TreeNode* root,TreeNode* sroot){
        if(root==NULL and sroot==NULL) return true;
        if(root==NULL )return false;
        if(sroot==NULL )return false;
        return (root->val==sroot->val) and check(root->left , sroot->left)
            and check(root->right , sroot->right);
    }
    void com(TreeNode* root,TreeNode* sroot){
        if(root==NULL)return;
        if(root->val==sroot->val){
            bool ch=check(root,sroot);
            ok |=ch;
            if(ok==true) return;
        }
        com(root->left,sroot);
        com(root->right,sroot);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        ok =false;
        com(root,subRoot);
        return ok;
    }
};