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
    TreeNode* res;
    void com(TreeNode* org ,TreeNode* clo,TreeNode* tar){
        if(org==NULL){
            return;
        }
        if(org->val==tar->val){
            res=clo;
            return;
        }else{
            com(org->left,clo->left,tar);
            com(org->right,clo->right,tar);
        }
    }
    TreeNode* getTargetCopy(TreeNode* org, TreeNode* clo, TreeNode* tar) {
        res=NULL;
        com(org,clo,tar);
        return res;
    }
};