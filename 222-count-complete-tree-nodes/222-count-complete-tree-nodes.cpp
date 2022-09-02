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
    int countNodes(TreeNode* root) {
        TreeNode* lf=root;
        TreeNode* rt=root;
        int lheight=0,rheight=0;
        while(lf){
            ++lheight;
            lf=lf->left;
        }
        while(rt){
            ++rheight;
            rt=rt->right;
        }
        if(rheight==lheight){
            return pow(2,rheight)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};