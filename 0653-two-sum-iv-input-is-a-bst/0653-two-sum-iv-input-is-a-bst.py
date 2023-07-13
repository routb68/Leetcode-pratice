# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        dic  =[]
        def go(root):
            if root==None:
                return False
            if (k-root.val) in dic :
                return True
            dic.append(root.val)
            return go(root.left) or go(root.right)
        return go(root)