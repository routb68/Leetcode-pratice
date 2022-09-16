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
    TreeNode* res,*curr;
    void com(TreeNode* root){
        if(root==NULL)return;
        com(root->left);
        if(res==NULL){
            res=root;
            res->left=NULL;
            curr=res;
        }else{
            curr->right =root;
            curr=curr->right;
            curr->left=NULL;
        }
        com(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        res=NULL,curr=NULL;
        com(root);
        return res;
    }
};