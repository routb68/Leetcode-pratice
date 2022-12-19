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
    vector<int> dfs(TreeNode* root,int dis){
        vector<int>v;
        if(root==NULL) return v;
        vector<int> l=dfs(root->left,dis);
        vector<int> r=dfs(root->right,dis);
        if(l.size()==0 and r.size()==0){
            v.push_back(1);
            return v;
        }
        for(int i=0;i<l.size();++i){
            for(int j=0;j<r.size();++j){
                if(l[i]+r[j]<=dis)++ans;
            }
        }
        for(int i=0;i<l.size();++i){
            v.push_back(l[i]+1);
        }
        for(int i=0;i<r.size();++i){
            v.push_back(r[i]+1);
        }
        return v;
        
    }
    int countPairs(TreeNode* root, int distance) {
        ans=0;
        dfs(root,distance);
        return ans;
    }
};