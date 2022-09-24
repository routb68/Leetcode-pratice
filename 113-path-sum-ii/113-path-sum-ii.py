# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        ans=[]
        self.dfs(root,targetSum,ans,[]);
        return ans;
    
    
    def dfs(self,root,k,ans,res):
        if root==None:
            return
        k-=root.val
        if root.left ==None and root.right==None and k==0:
            ans.append(res+[root.val])
            return
        self.dfs(root.left,k,ans,res+[root.val])
        self.dfs(root.right,k,ans,res+[root.val])