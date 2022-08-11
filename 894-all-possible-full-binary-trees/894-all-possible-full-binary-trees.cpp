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
    unordered_map<int,vector<TreeNode*>>dp;
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*>ans;
        if(dp.find(n)==dp.end()){
            if(n%2==0){
                dp[n]=ans;
                return ans;
            }
            else if(n==1){
                ans.push_back(new TreeNode());
                dp[n]=ans;
                return dp[n];
            }else{
                for(int i=1;i<n;i=i+2){
                    vector<TreeNode*>left=allPossibleFBT(i);
                    vector<TreeNode*>right=allPossibleFBT(n-i-1);
                    for(auto a:left){
                        for(auto b:right){
                             TreeNode* curr=new TreeNode();
                            curr->left=a;
                            curr->right=b;
                            ans.push_back(curr);
                        }
                    }
                }
                dp[n]=ans;
                return dp[n];
            }
        }
        return dp[n];
    }
};