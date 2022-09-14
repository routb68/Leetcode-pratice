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
    long long ans,total;
    int mod=1e9+7;
    int tsum(TreeNode* root){
        if(root==NULL)return 0;
        return root->val+tsum(root->left)+tsum(root->right);
    }
    int com(TreeNode* root){
        if(root==NULL) return 0;
        if(root->left==NULL and root->right==NULL){
            ans=max(ans,(total-root->val)*root->val);
            return root->val;
        }
        int left=root->val;
        left+=com(root->left);
        left+=com(root->right);
        ans=max(ans,(total-left)*left);
        return left;
    }
    int maxProduct(TreeNode* root) {
        total=tsum(root);
        ans=INT_MIN;
        com(root);
        return ans%mod;
    }
};