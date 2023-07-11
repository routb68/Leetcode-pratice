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
    string ans ="_";
    void go(TreeNode* root,string s){
        s+=(char('a'+root->val));
        if(root->left==nullptr and root->right==nullptr){
            if(ans=="_"){
                reverse(begin(s),end(s));
                ans = s;
            }else{
                reverse(begin(s),end(s));
                ans = min(ans,s);
            }
            return ;
        }
        if(root->left) go(root->left,s);
        if(root->right) go(root->right,s);
    }
    string smallestFromLeaf(TreeNode* root) {
        go(root,"");
        return ans;
    }
};