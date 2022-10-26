# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, root1: Optional[TreeNode],root2: Optional[TreeNode]) -> bool:
        if root1==None and root2==None :
            return True
        elif root1 and root2 and root1.val==root2.val:
            return self.dfs(root1.left,root2.right) and self.dfs(root1.right,root2.left)
        else :
            return False
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if root==None :
            return True
        else :
            return self.dfs(root.left,root.right)