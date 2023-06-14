# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        arr = []
        def go(root):
            nonlocal arr
            if(root!=None):
                arr.append(root.val)
                go(root.left)
                go(root.right)
        go(root)
        arr.sort()
        ans =1e10
        for i in range(1,len(arr)):
            ans = min(ans,arr[i]-arr[i-1])
        return ans