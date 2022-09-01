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
    map<int,map<int,vector<int>>>mp;
    void dfs(TreeNode* root,int x,int y){
        if(root==NULL)return;
        mp[y][x].push_back(root->val);
        dfs(root->left,x+1,y+1);
        dfs(root->right,x+1,y-1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root,0,0);
        vector<vector<int>>res;
        for(auto a:mp){
            vector<int>ans;
            for(auto b:a.second){
                vector<int>& v=b.second;
                sort(begin(v),end(v));
                for(int &x:v){
                    ans.push_back(x);
                }
            }
            res.push_back(ans);
        }
        reverse(begin(res),end(res));
        return res;
    }
};