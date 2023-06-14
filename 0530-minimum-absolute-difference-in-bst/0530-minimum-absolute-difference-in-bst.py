# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        ans = 1e18
        va =-1
        def go(root):
            nonlocal va
            nonlocal ans
            if(root.left):
                go(root.left)
            if(va>-1):
                ans = min(ans,abs(va- root.val))
            va = root.val
            if(root.right):
                go(root.right)
        go(root)
        return ans