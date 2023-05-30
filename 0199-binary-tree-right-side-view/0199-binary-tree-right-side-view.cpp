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
    map<int,int>us;
    void go(TreeNode* root,int i){
        if(root==NULL) return;
        go(root->left,i+1);
        us[i]=root->val;
        go(root->right,i+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        go(root,0);
        vector<int>v;
        for (auto i = us.begin(); i != us.end(); i++)
         v.push_back(i->second);
        return v;
    }
};