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
    unordered_map<int,int>us;
    int a;
    void go(TreeNode* root,int i){
        if(root==NULL) return;
        a=max(a,i);
        go(root->left,i+1);
        us[i]=root->val;
        go(root->right,i+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        a=-1;
        go(root,0);
        vector<int>v;
        for(int i=0;i<=a;++i){
            v.push_back(us[i]);
        }
        return v;
    }
};