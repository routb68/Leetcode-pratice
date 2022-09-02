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
    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>>all;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>vec;
        while(q.size()>1){
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL){
                all.emplace_back(vec);
                vec.clear();
                q.push(NULL);
                continue;
            }
            vec.push_back(curr->val);
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        if(vec.size()){
            all.emplace_back(vec);
        }
        for(int i=0;i<all.size();++i){
            if(i & 1){
                if(all[i][0]%2==1)return false;
                for(int j=1;j<all[i].size();++j){
                    if(all[i][j]>= all[i][j-1] or (all[i][j] %2==1 )){
                        return false;
                    }
                }
            }else{
                if(all[i][0]%2==0)return false;
                for(int j=1;j<all[i].size();++j){
                    if(all[i][j]<=all[i][j-1] or (all[i][j] %2==0)){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};