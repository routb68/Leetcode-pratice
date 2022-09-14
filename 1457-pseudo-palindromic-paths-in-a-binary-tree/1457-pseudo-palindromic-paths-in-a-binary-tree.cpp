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
    int ans;
    void dfs(TreeNode* root,vector<int>v){
        if(root->left==NULL and root->right==NULL){
            v[root->val-1]++;
            bool ok =true;
            for(int &x:v){
                if(x & 1){
                    if(ok){
                        ok=false;
                    }else {
                        return;
                    }
                }
            }
            ans++;
        }else{
            v[root->val-1]++;
            if(root->left!=NULL) dfs(root->left,v);
            if(root->right!=NULL) dfs(root->right,v);
        }
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root->left==NULL and root->right==NULL)return 1;
        vector<int>v(9,0);
        ans=0;
        v[root->val-1]++;
        if(root->left!=NULL) dfs(root->left,v);
        if(root->right!=NULL ) dfs(root->right,v);
        return ans;
    }
};