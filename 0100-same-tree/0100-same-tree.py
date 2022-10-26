# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self,p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if p==None and q==None:
            return True
        if p and q and  p.val==q.val:
            return self.dfs(p.left,q.left) and self.dfs(p.right,q.right)
        else :
            return False
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        return self.dfs(p,q)