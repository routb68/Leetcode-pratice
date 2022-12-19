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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* curr=root;
        vector<TreeNode*>vp,vq;
        while(curr->val!=p->val){
            vp.push_back(curr);
            if(curr->val>p->val) curr=curr->left;
            else if(curr->val<p->val)curr=curr->right;
        }
        vp.push_back(curr);
        curr=root;
        while(curr->val!=q->val){
            vq.push_back(curr);
            if(curr->val>q->val) curr=curr->left;
            else if(curr->val<q->val)curr=curr->right;
        }
        vq.push_back(curr);
        TreeNode* pre=root;
        int i=0,j=0;
        while(i<vp.size() and j<vq.size() and vp[i]==vq[j]){
            pre=vp[i];
            ++i;
            ++j;
        }
        return vp[i-1];
    }
};