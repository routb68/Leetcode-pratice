# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findSecondMinimumValue(self, root: Optional[TreeNode]) -> int:
        u=set()
        stack=[root]
        while stack:
            x=stack.pop()
            if x:
                u.add(x.val)
                stack.append( x.left )
                stack.append( x.right )
        if len(u)<2:
            return -1
        return sorted(u)[1]