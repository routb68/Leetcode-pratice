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
    int64_t sum,pro;
    int64_t mod=1e9+7;
    void dfssum(TreeNode* root){
        if(root) sum+=root->val;
        else return;
        dfssum(root->left);
        dfssum(root->right);
    }
    int mapro(TreeNode* root){
        if(root==NULL) return 0;
        int64_t x= mapro(root->left)+ mapro(root->right)+root->val;
        pro=max(pro , ((sum-x)*(x)));
        return x;
    }
    int maxProduct(TreeNode* root) {
        sum=0,pro=INT_MIN;
        dfssum(root);
        mapro(root);
        return pro % mod;
    }
};